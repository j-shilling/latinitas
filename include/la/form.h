#ifndef __FORM_H__
#define __FORM_H__

#include <stdint.h>
#include <stdbool.h>

#include <la/accidence.h>

#define FORM_BUF_SIZE	3

typedef uint32_t la_form_t;

la_accident_t la_get_part_of_speech	(la_form_t form);
la_accident_t la_get_number		(la_form_t form);
la_accident_t la_get_gender		(la_form_t form);
la_accident_t la_get_case		(la_form_t form);
la_accident_t la_get_person		(la_form_t form);
la_accident_t la_get_degree		(la_form_t form);
la_accident_t la_get_voice		(la_form_t form);
la_accident_t la_get_tense		(la_form_t form);
la_accident_t la_get_mood		(la_form_t form);

la_form_t la_set_accident (la_form_t form, la_accident_t val);

bool la_has_accident (la_form_t form, la_accident_t val);
int la_form_cmp (la_form_t one, la_form_t two);

uint8_t *la_serialize_form_t (la_form_t form);
la_form_t la_unserialize_form_t (uint8_t *buf);

#endif /* __FORM_H__ */
