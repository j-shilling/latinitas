#ifndef __CHAR_H__
#define __CHAR_H__

typedef char		la_char_t;
typedef la_char_t *	la_string_t;

static const la_char_t END_OF_STRING = '\0';

int la_strlen  (la_string_t str);
int la_strsize (la_string_t str);
la_string_t la_strdup (la_string_t str);

#endif 
