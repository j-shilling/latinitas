#ifndef __FORM_H__
#define __FORM_H__

#include <stdint.h>

#include <la/accidence.h>

typedef struct la_form_s	la_form_t;
typedef uint32_t		la_form_buffer_t;

size_t sizeof_la_form_t ();
la_form_t *create_form_t ();

la_part_of_speech_t	la_get_part_of_speech	(la_form_t *form);
la_number_t		la_get_number		(la_form_t *form);
la_gender_t		la_get_gender		(la_form_t *form);
la_case_t		la_get_case		(la_form_t *form);
la_person_t		la_get_person		(la_form_t *form);
la_degree_t		la_get_degree		(la_form_t *form);
la_voice_t		la_get_voice		(la_form_t *form);
la_tense_t		la_get_tense		(la_form_t *form);
la_mood_t		la_get_mood		(la_form_t *form);

void la_set_part_of_speech	(la_form_t *form, la_part_of_speech_t	val);
void la_set_number		(la_form_t *form, la_number_t		val);
void la_set_gender		(la_form_t *form, la_gender_t		val);
void la_set_case		(la_form_t *form, la_case_t		val);
void la_set_person		(la_form_t *form, la_person_t		val);
void la_set_degree		(la_form_t *form, la_degree_t		val);
void la_set_voice		(la_form_t *form, la_voice_t		val);
void la_set_tense		(la_form_t *form, la_tense_t		val);
void la_set_mood		(la_form_t *form, la_mood_t		val);

uint8_t *la_serialize_form_t (la_form_t *form);
la_form_t *la_unserialize_form_t (uint8_t *buf);

la_form_buffer_t la_buffer_form_t (la_form_t *form);

#endif /* __FORM_H__ */
