#include <stdlib.h>

#include <la/accidence.h>
#include <la/form.h>

#include <check.h>

START_TEST (check_set_accident)
{
	la_form_t form = 0;

	ck_assert_int_eq (la_get_part_of_speech (form), UNDEFINED);
	ck_assert_int_eq (la_get_number (form), UNDEFINED);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), UNDEFINED);
	ck_assert_int_eq (la_get_person (form), UNDEFINED);
	ck_assert_int_eq (la_get_tense (form), UNDEFINED);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, VERB);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), UNDEFINED);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), UNDEFINED);
	ck_assert_int_eq (la_get_person (form), UNDEFINED);
	ck_assert_int_eq (la_get_tense (form), UNDEFINED);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, PLURAL);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), PLURAL);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), UNDEFINED);
	ck_assert_int_eq (la_get_person (form), UNDEFINED);
	ck_assert_int_eq (la_get_tense (form), UNDEFINED);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, ACTIVE);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), PLURAL);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), ACTIVE);
	ck_assert_int_eq (la_get_person (form), UNDEFINED);
	ck_assert_int_eq (la_get_tense (form), UNDEFINED);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, THIRD_PERSON);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), PLURAL);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), ACTIVE);
	ck_assert_int_eq (la_get_person (form), THIRD_PERSON);
	ck_assert_int_eq (la_get_tense (form), UNDEFINED);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, FUTURE);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), PLURAL);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), ACTIVE);
	ck_assert_int_eq (la_get_person (form), THIRD_PERSON);
	ck_assert_int_eq (la_get_tense (form), FUTURE);
	ck_assert_int_eq (la_get_mood (form), UNDEFINED);

	form = la_set_accident (form, INDICATIVE);
	
	ck_assert_int_eq (la_get_part_of_speech (form), VERB);
	ck_assert_int_eq (la_get_number (form), PLURAL);
	ck_assert_int_eq (la_get_gender (form), UNDEFINED);
	ck_assert_int_eq (la_get_case (form), UNDEFINED);
	ck_assert_int_eq (la_get_degree (form), UNDEFINED);
	ck_assert_int_eq (la_get_voice (form), ACTIVE);
	ck_assert_int_eq (la_get_person (form), THIRD_PERSON);
	ck_assert_int_eq (la_get_tense (form), FUTURE);
	ck_assert_int_eq (la_get_mood (form), INDICATIVE);

}
END_TEST

START_TEST (check_form_serialization)
{
	la_form_t form = 0;

	form = la_set_accident (form, VERB);
	form = la_set_accident (form, FIRST_PERSON);
	form = la_set_accident (form, PLURAL);
	form = la_set_accident (form, PERFECT);
	form = la_set_accident (form, ACTIVE);
	form = la_set_accident (form, INDICATIVE);

	uint8_t *buf = la_serialize_form_t (form);

	/*
	 * buf[0] = part of speech, number, and person
	 * 0100 [VERB] 10 [PLURAL] 01 [FIRST_PERSON] = 0100 1001 = 0x49
	 *
	 * buf[1] = gender, case, and degree
	 * all UNDEFINED = 0000 0000 = 0x00
	 *
	 * buf[2] = voice, tense, and mood
	 * 01 [ACTIVE] 100 [PERFECT] 001 [INDICATIVE] = 0110 0001 = 0x61
	 */

	ck_assert_int_eq (buf[0], 0x49);
	ck_assert_int_eq (buf[1], 0x00);
	ck_assert_int_eq (buf[2], 0x61);

	free (buf);
}
END_TEST

START_TEST (check_form_unserialization)
{
	uint8_t buf[3] = { 0x49, 0x00, 0x61 };

	la_form_t form = la_unserialize_form_t (buf);

	ck_assert (form);

	ck_assert_int_eq (la_get_part_of_speech(form), VERB);
	ck_assert_int_eq (la_get_person(form), FIRST_PERSON);
	ck_assert_int_eq (la_get_number(form), PLURAL);
	ck_assert_int_eq (la_get_tense(form), PERFECT);
	ck_assert_int_eq (la_get_voice(form), ACTIVE);
	ck_assert_int_eq (la_get_mood(form), INDICATIVE);
	ck_assert_int_eq (la_get_case(form), UNDEFINED);
	ck_assert_int_eq (la_get_gender(form), UNDEFINED);
	ck_assert_int_eq (la_get_degree(form), UNDEFINED);
}
END_TEST

int
main (void)
{
	int number_failed;

	Suite *s;
	SRunner *sr;
	TCase *tc_core;

	s = suite_create ("form");
	tc_core = tcase_create ("Core");

	tcase_add_test (tc_core, check_set_accident);
	tcase_add_test (tc_core, check_form_serialization);
	tcase_add_test (tc_core, check_form_unserialization);

	suite_add_tcase (s, tc_core);

	sr = srunner_create (s);

	srunner_set_fork_status (sr, CK_NOFORK);
	srunner_run_all(sr, CK_VERBOSE);
	number_failed = srunner_ntests_failed (sr);
	srunner_free (sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
