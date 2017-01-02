#ifndef __WORD_H__
#define __WORD_H__

#include <stdint.h>

#include <la/char.h>

typedef struct la_word_s la_word_t;

la_word_t * create_la_word_t (la_string_t stem, la_string_t ending);
void free_la_word_t (la_word_t *word);

#endif
