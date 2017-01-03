#include <stdlib.h>

#include <la/char.h>

int
la_strlen (la_string_t str)
{
	la_char_t * char_ptr = (la_char_t *) str;
	int len = 0;

	while ((*char_ptr) != END_OF_STRING)
	{
		len++;
		char_ptr++;
	}

	return len;
}

int
la_strsize(la_string_t str)
{
	return (la_strlen (str) + 1) * sizeof (la_char_t);
}

la_string_t
la_strdup (la_string_t str)
{
	la_char_t *this = (la_char_t *) malloc (la_strsize (str));
	la_char_t *that = (la_char_t *) str;

	for (int i = 0; i <= la_strlen (str); i ++)
	{
		this[i] = that[i];
	}

	return this;
}

