#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <la/accidence.h>
#include <la/form.h>

struct la_form_s {
	uint8_t _part_of_speech	: 4;
	uint8_t _number		: 2;
	uint8_t _person		: 2;

	uint8_t _gender		: 3;
	uint8_t _case		: 3;
	uint8_t _degree		: 2;

	uint8_t _voice		: 2;
	uint8_t _tense		: 3;
	uint8_t _mood		: 3;
};

size_t sizeof_la_form_t () { return sizeof (la_form_t); }

la_form_t *
create_form_t()
{
	la_form_t *form = (la_form_t *) malloc (sizeof_la_form_t());
	memset (form, 0, sizeof_la_form_t());
	return form;
}

la_part_of_speech_t	la_get_part_of_speech	(la_form_t *form) { return (la_part_of_speech_t)	form->_part_of_speech; }
la_number_t		la_get_number		(la_form_t *form) { return (la_number_t)		form->_number; }
la_gender_t		la_get_gender		(la_form_t *form) { return (la_gender_t)		form->_gender; }
la_case_t		la_get_case		(la_form_t *form) { return (la_case_t)			form->_case; }
la_person_t		la_get_person		(la_form_t *form) { return (la_person_t)		form->_person; }
la_degree_t		la_get_degree		(la_form_t *form) { return (la_degree_t)		form->_degree; }
la_voice_t		la_get_voice		(la_form_t *form) { return (la_voice_t)			form->_voice; }
la_tense_t		la_get_tense		(la_form_t *form) { return (la_tense_t)			form->_tense; }
la_mood_t		la_get_mood		(la_form_t *form) { return (la_mood_t)			form->_mood; }

void
la_set_part_of_speech	(la_form_t *form, la_part_of_speech_t	val) { form->_part_of_speech	= val; }
void
la_set_number		(la_form_t *form, la_number_t		val) { form->_number		= val; }
void
la_set_gender		(la_form_t *form, la_gender_t		val) { form->_gender		= val; }
void
la_set_case		(la_form_t *form, la_case_t		val) { form->_case		= val; }
void
la_set_person		(la_form_t *form, la_person_t		val) { form->_person		= val; }
void
la_set_degree		(la_form_t *form, la_degree_t		val) { form->_degree		= val; }
void
la_set_voice		(la_form_t *form, la_voice_t		val) { form->_voice		= val; }
void
la_set_tense		(la_form_t *form, la_tense_t		val) { form->_tense		= val; }
void
la_set_mood		(la_form_t *form, la_mood_t		val) { form->_mood		= val; }

uint8_t *
la_serialize_form_t (la_form_t *form)
{
	uint8_t *buf = (uint8_t *) malloc (3);

	// buf[0] = 0000 [part of speech] 00 [number] 00 [person]
	buf[0] = (form->_part_of_speech << 4) + (form->_number << 2) + (form->_person << 0);

	// buf[1] = 000 [gender] 000 [case] 00 [degree]
	buf[1] = (form->_gender << 5) + (form->_case << 2) + (form->_degree << 0);

	// buf[2] = 00 [voice] 000 [tense] 000 [mood]
	buf[2] = (form->_voice << 6) + (form->_tense << 3) + (form->_mood << 0);

	return buf;
}

la_form_t *
la_unserialize_form_t (uint8_t *buf)
{
	la_form_t *ret = create_form_t();

	ret->_part_of_speech	= (buf[0] >> 4) & 0x0E; // 0000 1111
	ret->_number		= (buf[0] >> 2) & 0x03; // 0000 0011
	ret->_person		= (buf[0] >> 0) & 0x03; // 0000 0011

	ret->_gender		= (buf[1] >> 5) & 0x07; // 0000 0111
	ret->_case		= (buf[1] >> 2) & 0x07; // 0000 0111
	ret->_degree		= (buf[1] >> 0) & 0x03; // 0000 0011

	ret->_voice		= (buf[2] >> 6) & 0x03; // 0000 0011
	ret->_tense		= (buf[2] >> 3) & 0x07; // 0000 0111
	ret->_mood		= (buf[2] >> 0) & 0x07; // 0000 0111

	return ret;
}

la_form_buffer_t
la_buffer_form_t (la_form_t *form)
{
	uint8_t *buf = la_serialize_form_t (form);

	la_form_buffer_t ret = (buf[0] << 16) + (buf[1] << 8) + (buf[2] << 0);

	return ret;
}
