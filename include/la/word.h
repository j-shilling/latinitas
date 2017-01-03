#ifndef __WORD_H__
#define __WORD_H__

#include <stdint.h>

#include <la/char.h>
#include <la/form.h>

typedef struct la_word_s * la_word_t;

la_word_t create_la_word_t (la_string_t stem, la_string_t ending, la_form_t form);
void free_la_word_t (la_word_t word);

uint8_t *la_serialize_word_t (la_word_t word);
la_word_t la_unserialize_word_t (uint8_t *buf);

#endif
