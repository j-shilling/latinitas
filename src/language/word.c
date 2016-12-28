#include <stdlib.h>
#include <stdint.h>

#include <la/char.h>
#include <la/word.h>

struct la_word_s {
	la_char_t *stem;
	la_char_t *ending;
	uint16_t form;
};

la_word_t *
create_la_word_t (const la_char_t *stem,
		const la_char_t *ending,
		const uint16_t form)
{
	la_word_t *ret = (la_word_t *) malloc (
			sizeof (la_word_t));

	ret->stem   = stem;
	ret->ending = ending;
	ret->form   = form;

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
