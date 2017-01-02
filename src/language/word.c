#include <stdlib.h>
#include <stdint.h>

#include <la/char.h>
#include <la/form.h>
#include <la/word.h>

struct la_word_s {
	la_string_t		stem;
	la_string_t		ending;
	la_form_buffer_t	form;
};

la_word_t *
create_la_word_t (la_string_t stem,
		la_string_t ending)
{
	la_word_t *ret = (la_word_t *) malloc (
			sizeof (la_word_t));

	ret->stem   = stem;
	ret->ending = ending;

	return ret;
}

void
free_la_word_t (la_word_t *word)
{
	if (word)
	{
		if (word->stem)   free (word->stem);
		if (word->ending) free (word->ending);

		free (word);
	}
}
