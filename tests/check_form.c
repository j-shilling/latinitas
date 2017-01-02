#include <stdlib.h>

#include <la/accidence.h>
#include <la/form.h>

#include <check.h>

START_TEST (check_form_size)
{
	ck_assert_int_eq (sizeof_la_form_t(), 3);
}
END_TEST

START_TEST (check_form_serialization)
{
	la_form_t *form = create_form_t();

	la_set_part_of_speech (form, VERB);
	la_set_person (form, FIRST_PERSON);
	la_set_number (form, PLURAL);
	la_set_tense (form, PERFECT);
	la_set_voice (form, ACTIVE);
	la_set_mood (form, INDICATIVE);

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
	// check buf length
	ck_assert_int_eq (sizeof(buf) / sizeof (buf[0]), 3);

	ck_assert_int_eq (buf[0], 0x49);
	ck_assert_int_eq (buf[1], 0x00);
	ck_assert_int_eq (buf[2], 0x61);

	free (buf);
	free (form);
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

	tcase_add_test (tc_core, check_form_size);

	suite_add_tcase (s, tc_core);

	sr = srunner_create (s);

	srunner_set_fork_status (sr, CK_NOFORK);
	srunner_run_all(sr, CK_VERBOSE);
	number_failed = srunner_ntests_failed (sr);
	srunner_free (sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
