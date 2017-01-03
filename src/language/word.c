#include <stdlib.h>
#include <stdint.h>

#include <la/char.h>
#include <la/form.h>
#include <la/word.h>

struct la_word_s {
	la_string_t	stem;
	la_string_t	ending;
	la_form_t	form;
};

la_word_t
create_la_word_t (la_string_t stem,
		la_string_t ending,
		la_form_t form)
{
	la_word_t ret = (la_word_t) malloc (
			sizeof (struct la_word_s));

	ret->stem   = stem;
	ret->ending = ending;
	ret->form   = form;

	return ret;
}

void
free_la_word_t (la_word_t word)
{
	if (word)
	{
		if (word->stem)   free (word->stem);
		if (word->ending) free (word->ending);

		free (word);
	}
}

uint8_t *
la_serialize_word_t (la_word_t word)
{
	int stem_size = la_strsize (word->stem);
	int ending_size = la_strsize (word->ending);
	int buf_size = FORM_BUF_SIZE + stem_size + ending_size;
	int index = 0;

	uint8_t *buf = (uint8_t *) malloc (buf_size);
	uint8_t *form = la_serialize_form_t (word->form);

	for (int i = 0; i < FORM_BUF_SIZE; i++)
	{
		buf[index] = form[i];
		index++;
	}

	for (int i = 0; i < stem_size; i++)
	{
		buf[index] = ((uint8_t *) word->stem)[i];
		index++;	
	}

	for (int i = 0; i < ending_size; i++)
	{
		buf[index] = ((uint8_t *) word->ending)[i];
		index++;	
	}

	return buf;
}

la_word_t
la_unserialize_word_t (uint8_t *buf)
{
	la_form_t form = la_unserialize_form_t (buf);
	la_string_t stem = (la_string_t)(buf + FORM_BUF_SIZE);
	la_string_t ending = (la_string_t)(buf + FORM_BUF_SIZE + la_strsize (stem));
	
	return create_la_word_t (la_strdup (stem), la_strdup (ending), form);
}


