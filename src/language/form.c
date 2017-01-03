#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <la/accidence.h>
#include <la/form.h>

la_accident_t
la_get_part_of_speech (la_form_t form)
{
	return (la_accident_t) (form & PART_OF_SPEECH);
}

la_accident_t
la_get_number (la_form_t form)
{
	return (la_accident_t) (form & NUMBER);
}

la_accident_t
la_get_gender (la_form_t form)
{
	return (la_accident_t) (form & GENDER);
}

la_accident_t
la_get_case (la_form_t form)
{
	return (la_accident_t) (form & CASE);
}

la_accident_t
la_get_person (la_form_t form)
{
	return (la_accident_t) (form & PERSON);
}

la_accident_t
la_get_degree (la_form_t form)
{
	return (la_accident_t) (form & DEGREE);
}

la_accident_t
la_get_voice (la_form_t form)
{
	return (la_accident_t) (form & VOICE);
}

la_accident_t
la_get_tense (la_form_t form)
{
	return (la_accident_t) (form & TENSE);
}

la_accident_t
la_get_mood (la_form_t form)
{
	return (la_accident_t) (form & MOOD);
}

la_form_t
la_set_accident (la_form_t form, la_accident_t val)
{

	if (is_part_of_speech (val))
	{
		form &= ~PART_OF_SPEECH;
		form |= val & PART_OF_SPEECH;
	}

	if (is_number (val))
	{
		form &= ~NUMBER;
		form |= val & NUMBER;
	}
	
	if (is_gender (val))
	{
		form &= ~GENDER;
		form |= val & GENDER;
	}

	if (is_case (val))
	{
		form &= ~CASE;
		form |= val & CASE;
	}

	if (is_person (val))
	{
		form &= ~PERSON;
		form |= val & PERSON;
	}

	if (is_degree (val))
	{
		form &= ~DEGREE;
		form |= val & DEGREE;
	}

	if (is_voice (val))
	{
		form &= ~VOICE;
		form |= val & VOICE;
	}

	if (is_tense (val))
	{
		form &= ~TENSE;
		form |= val & TENSE;
	}

	if (is_mood (val))
	{
		form &= ~MOOD;
		form |= val & MOOD;
	}

	return form;
}

bool
la_has_accident (la_form_t form, la_accident_t val)
{
	return (0 < (form & val)) ? true : false;
}

int
la_form_cmp (la_form_t one, la_form_t two)
{
	const static int ONE_LESS_THAN_TWO	= -1;
	const static int ONE_EQUAL_TO_TWO	=  0;
	const static int ONE_GREATER_THAN_TWO	=  1;

	if (one < two)
		return ONE_LESS_THAN_TWO;

	if (one > two)
		return ONE_GREATER_THAN_TWO;

	return ONE_EQUAL_TO_TWO;
}

uint8_t *
la_serialize_form_t (la_form_t form)
{
	uint8_t *buf = (uint8_t *) malloc (FORM_BUF_SIZE);

	// buf[0] = 0000 [part of speech] 00 [number] 00 [person]
	buf[0] = (la_get_part_of_speech (form) >> 16)
		+ (la_get_number (form) >> 16)
		+ (la_get_person (form) >> 16);

	// buf[1] = 000 [gender] 000 [case] 00 [degree]
	buf[1] = (la_get_gender (form) >> 8)
		+ (la_get_case (form) >> 8)
		+ (la_get_degree (form) >> 8);

	// buf[2] = 00 [voice] 000 [tense] 000 [mood]
	buf[2] = la_get_voice (form) + la_get_tense (form) + la_get_mood (form);

	return buf;
}

la_form_t
la_unserialize_form_t (uint8_t *buf)
{
	return (la_form_t) (
			(buf[0] << 16) + (buf[1] << 8) + buf[2]
			);
}
