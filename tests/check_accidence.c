#include <stdlib.h>
#include <check.h>

#include <la/accidence.h>

START_TEST(check_is_part_of_speech)
{
	ck_assert (!is_part_of_speech (UNDEFINED));

	ck_assert (is_part_of_speech (NOUN));
	ck_assert (is_part_of_speech (PRONOUN));
	ck_assert (is_part_of_speech (ADJECTIVE));
	ck_assert (is_part_of_speech (VERB));
	ck_assert (is_part_of_speech (ADVERB));
	ck_assert (is_part_of_speech (PREPOSITION));
	ck_assert (is_part_of_speech (CONJUNCTION));
	ck_assert (is_part_of_speech (INTERJECTION));

	ck_assert (!is_part_of_speech(SINGULAR));
	ck_assert (!is_part_of_speech(PLURAL));

	ck_assert (!is_part_of_speech(MASCULINE));
	ck_assert (!is_part_of_speech(FEMININE));
	ck_assert (!is_part_of_speech(NEUTER));

	ck_assert (!is_part_of_speech(NOMINATIVE));
	ck_assert (!is_part_of_speech(GENITIVE));
	ck_assert (!is_part_of_speech(DATIVE));
	ck_assert (!is_part_of_speech(ACCUSATIVE));
	ck_assert (!is_part_of_speech(ABLATIVE));
	ck_assert (!is_part_of_speech(VOCATIVE));
	ck_assert (!is_part_of_speech(LOCATIVE));

	ck_assert (!is_part_of_speech(FIRST_PERSON));
	ck_assert (!is_part_of_speech(SECOND_PERSON));
	ck_assert (!is_part_of_speech(THIRD_PERSON));

	ck_assert (!is_part_of_speech(POSITIVE));
	ck_assert (!is_part_of_speech(COMPARATIVE));
	ck_assert (!is_part_of_speech(SUPERLATIVE));

	ck_assert (!is_part_of_speech(ACTIVE));
	ck_assert (!is_part_of_speech(PASSIVE));

	ck_assert (!is_part_of_speech(PRESENT));
	ck_assert (!is_part_of_speech(IMPERFECT));
	ck_assert (!is_part_of_speech(FUTURE));
	ck_assert (!is_part_of_speech(PERFECT));
	ck_assert (!is_part_of_speech(PLUPERFECT));
	ck_assert (!is_part_of_speech(FUTURE_PERFECT));

	ck_assert (!is_part_of_speech(INDICATIVE));
	ck_assert (!is_part_of_speech(IMPERATIVE));
	ck_assert (!is_part_of_speech(SUBJUNCTIVE));
	ck_assert (!is_part_of_speech(PARTICIPLE));
	ck_assert (!is_part_of_speech(INFINITIVE));
}
END_TEST

START_TEST(check_is_number)
{
	ck_assert (!is_number (UNDEFINED));

	ck_assert (!is_number (NOUN));
	ck_assert (!is_number (PRONOUN));
	ck_assert (!is_number (ADJECTIVE));
	ck_assert (!is_number (VERB));
	ck_assert (!is_number (ADVERB));
	ck_assert (!is_number (PREPOSITION));
	ck_assert (!is_number (CONJUNCTION));
	ck_assert (!is_number (INTERJECTION));

	ck_assert (is_number(SINGULAR));
	ck_assert (is_number(PLURAL));

	ck_assert (!is_number(MASCULINE));
	ck_assert (!is_number(FEMININE));
	ck_assert (!is_number(NEUTER));

	ck_assert (!is_number(NOMINATIVE));
	ck_assert (!is_number(GENITIVE));
	ck_assert (!is_number(DATIVE));
	ck_assert (!is_number(ACCUSATIVE));
	ck_assert (!is_number(ABLATIVE));
	ck_assert (!is_number(VOCATIVE));
	ck_assert (!is_number(LOCATIVE));

	ck_assert (!is_number(FIRST_PERSON));
	ck_assert (!is_number(SECOND_PERSON));
	ck_assert (!is_number(THIRD_PERSON));

	ck_assert (!is_number(POSITIVE));
	ck_assert (!is_number(COMPARATIVE));
	ck_assert (!is_number(SUPERLATIVE));

	ck_assert (!is_number(ACTIVE));
	ck_assert (!is_number(PASSIVE));

	ck_assert (!is_number(PRESENT));
	ck_assert (!is_number(IMPERFECT));
	ck_assert (!is_number(FUTURE));
	ck_assert (!is_number(PERFECT));
	ck_assert (!is_number(PLUPERFECT));
	ck_assert (!is_number(FUTURE_PERFECT));

	ck_assert (!is_number(INDICATIVE));
	ck_assert (!is_number(IMPERATIVE));
	ck_assert (!is_number(SUBJUNCTIVE));
	ck_assert (!is_number(PARTICIPLE));
	ck_assert (!is_number(INFINITIVE));
}
END_TEST

START_TEST(check_is_gender)
{
	ck_assert (!is_gender (UNDEFINED));

	ck_assert (!is_gender (NOUN));
	ck_assert (!is_gender (PRONOUN));
	ck_assert (!is_gender (ADJECTIVE));
	ck_assert (!is_gender (VERB));
	ck_assert (!is_gender (ADVERB));
	ck_assert (!is_gender (PREPOSITION));
	ck_assert (!is_gender (CONJUNCTION));
	ck_assert (!is_gender (INTERJECTION));

	ck_assert (!is_gender(SINGULAR));
	ck_assert (!is_gender(PLURAL));

	ck_assert (is_gender(MASCULINE));
	ck_assert (is_gender(FEMININE));
	ck_assert (is_gender(NEUTER));

	ck_assert (!is_gender(NOMINATIVE));
	ck_assert (!is_gender(GENITIVE));
	ck_assert (!is_gender(DATIVE));
	ck_assert (!is_gender(ACCUSATIVE));
	ck_assert (!is_gender(ABLATIVE));
	ck_assert (!is_gender(VOCATIVE));
	ck_assert (!is_gender(LOCATIVE));

	ck_assert (!is_gender(FIRST_PERSON));
	ck_assert (!is_gender(SECOND_PERSON));
	ck_assert (!is_gender(THIRD_PERSON));

	ck_assert (!is_gender(POSITIVE));
	ck_assert (!is_gender(COMPARATIVE));
	ck_assert (!is_gender(SUPERLATIVE));

	ck_assert (!is_gender(ACTIVE));
	ck_assert (!is_gender(PASSIVE));

	ck_assert (!is_gender(PRESENT));
	ck_assert (!is_gender(IMPERFECT));
	ck_assert (!is_gender(FUTURE));
	ck_assert (!is_gender(PERFECT));
	ck_assert (!is_gender(PLUPERFECT));
	ck_assert (!is_gender(FUTURE_PERFECT));

	ck_assert (!is_gender(INDICATIVE));
	ck_assert (!is_gender(IMPERATIVE));
	ck_assert (!is_gender(SUBJUNCTIVE));
	ck_assert (!is_gender(PARTICIPLE));
	ck_assert (!is_gender(INFINITIVE));
}
END_TEST

START_TEST(check_is_case)
{
	ck_assert (!is_case (UNDEFINED));

	ck_assert (!is_case (NOUN));
	ck_assert (!is_case (PRONOUN));
	ck_assert (!is_case (ADJECTIVE));
	ck_assert (!is_case (VERB));
	ck_assert (!is_case (ADVERB));
	ck_assert (!is_case (PREPOSITION));
	ck_assert (!is_case (CONJUNCTION));
	ck_assert (!is_case (INTERJECTION)); 

	ck_assert (!is_case(SINGULAR));
	ck_assert (!is_case(PLURAL));

	ck_assert (!is_case(MASCULINE));
	ck_assert (!is_case(FEMININE));
	ck_assert (!is_case(NEUTER));

	ck_assert (is_case(NOMINATIVE));
	ck_assert (is_case(GENITIVE));
	ck_assert (is_case(DATIVE));
	ck_assert (is_case(ACCUSATIVE));
	ck_assert (is_case(ABLATIVE));
	ck_assert (is_case(VOCATIVE));
	ck_assert (is_case(LOCATIVE));

	ck_assert (!is_case(FIRST_PERSON));
	ck_assert (!is_case(SECOND_PERSON));
	ck_assert (!is_case(THIRD_PERSON));

	ck_assert (!is_case(POSITIVE));
	ck_assert (!is_case(COMPARATIVE));
	ck_assert (!is_case(SUPERLATIVE));

	ck_assert (!is_case(ACTIVE));
	ck_assert (!is_case(PASSIVE));

	ck_assert (!is_case(PRESENT));
	ck_assert (!is_case(IMPERFECT));
	ck_assert (!is_case(FUTURE));
	ck_assert (!is_case(PERFECT));
	ck_assert (!is_case(PLUPERFECT));
	ck_assert (!is_case(FUTURE_PERFECT));

	ck_assert (!is_case(INDICATIVE));
	ck_assert (!is_case(IMPERATIVE));
	ck_assert (!is_case(SUBJUNCTIVE));
	ck_assert (!is_case(PARTICIPLE));
	ck_assert (!is_case(INFINITIVE));
}
END_TEST

START_TEST(check_is_person)
{
	ck_assert (!is_person (UNDEFINED));

	ck_assert (!is_person (NOUN));
	ck_assert (!is_person (PRONOUN));
	ck_assert (!is_person (ADJECTIVE));
	ck_assert (!is_person (VERB));
	ck_assert (!is_person (ADVERB));
	ck_assert (!is_person (PREPOSITION));
	ck_assert (!is_person (CONJUNCTION));
	ck_assert (!is_person (INTERJECTION));

	ck_assert (!is_person(SINGULAR));
	ck_assert (!is_person(PLURAL));

	ck_assert (!is_person(MASCULINE));
	ck_assert (!is_person(FEMININE));
	ck_assert (!is_person(NEUTER));

	ck_assert (!is_person(NOMINATIVE));
	ck_assert (!is_person(GENITIVE));
	ck_assert (!is_person(DATIVE));
	ck_assert (!is_person(ACCUSATIVE));
	ck_assert (!is_person(ABLATIVE));
	ck_assert (!is_person(VOCATIVE));
	ck_assert (!is_person(LOCATIVE));

	ck_assert (is_person(FIRST_PERSON));
	ck_assert (is_person(SECOND_PERSON));
	ck_assert (is_person(THIRD_PERSON));

	ck_assert (!is_person(POSITIVE));
	ck_assert (!is_person(COMPARATIVE));
	ck_assert (!is_person(SUPERLATIVE));

	ck_assert (!is_person(ACTIVE));
	ck_assert (!is_person(PASSIVE));

	ck_assert (!is_person(PRESENT));
	ck_assert (!is_person(IMPERFECT));
	ck_assert (!is_person(FUTURE));
	ck_assert (!is_person(PERFECT));
	ck_assert (!is_person(PLUPERFECT));
	ck_assert (!is_person(FUTURE_PERFECT));

	ck_assert (!is_person(INDICATIVE));
	ck_assert (!is_person(IMPERATIVE));
	ck_assert (!is_person(SUBJUNCTIVE));
	ck_assert (!is_person(PARTICIPLE));
	ck_assert (!is_person(INFINITIVE));
}
END_TEST

START_TEST(check_is_degree)
{
	ck_assert (!is_degree (UNDEFINED));

	ck_assert (!is_degree (NOUN));
	ck_assert (!is_degree (PRONOUN));
	ck_assert (!is_degree (ADJECTIVE));
	ck_assert (!is_degree (VERB));
	ck_assert (!is_degree (ADVERB));
	ck_assert (!is_degree (PREPOSITION));
	ck_assert (!is_degree (CONJUNCTION));
	ck_assert (!is_degree (INTERJECTION));

	ck_assert (!is_degree(SINGULAR));
	ck_assert (!is_degree(PLURAL));

	ck_assert (!is_degree(MASCULINE));
	ck_assert (!is_degree(FEMININE));
	ck_assert (!is_degree(NEUTER));

	ck_assert (!is_degree(NOMINATIVE));
	ck_assert (!is_degree(GENITIVE));
	ck_assert (!is_degree(DATIVE));
	ck_assert (!is_degree(ACCUSATIVE));
	ck_assert (!is_degree(ABLATIVE));
	ck_assert (!is_degree(VOCATIVE));
	ck_assert (!is_degree(LOCATIVE));

	ck_assert (!is_degree(FIRST_PERSON));
	ck_assert (!is_degree(SECOND_PERSON));
	ck_assert (!is_degree(THIRD_PERSON));

	ck_assert (is_degree(POSITIVE));
	ck_assert (is_degree(COMPARATIVE));
	ck_assert (is_degree(SUPERLATIVE));

	ck_assert (!is_degree(ACTIVE));
	ck_assert (!is_degree(PASSIVE));

	ck_assert (!is_degree(PRESENT));
	ck_assert (!is_degree(IMPERFECT));
	ck_assert (!is_degree(FUTURE));
	ck_assert (!is_degree(PERFECT));
	ck_assert (!is_degree(PLUPERFECT));
	ck_assert (!is_degree(FUTURE_PERFECT));

	ck_assert (!is_degree(INDICATIVE));
	ck_assert (!is_degree(IMPERATIVE));
	ck_assert (!is_degree(SUBJUNCTIVE));
	ck_assert (!is_degree(PARTICIPLE));
	ck_assert (!is_degree(INFINITIVE));
}
END_TEST

START_TEST(check_is_voice)
{
	ck_assert (!is_voice (UNDEFINED));

	ck_assert (!is_voice (NOUN));
	ck_assert (!is_voice (PRONOUN));
	ck_assert (!is_voice (ADJECTIVE));
	ck_assert (!is_voice (VERB));
	ck_assert (!is_voice (ADVERB));
	ck_assert (!is_voice (PREPOSITION));
	ck_assert (!is_voice (CONJUNCTION));
	ck_assert (!is_voice (INTERJECTION));

	ck_assert (!is_voice(SINGULAR));
	ck_assert (!is_voice(PLURAL));

	ck_assert (!is_voice(MASCULINE));
	ck_assert (!is_voice(FEMININE));
	ck_assert (!is_voice(NEUTER));

	ck_assert (!is_voice(NOMINATIVE));
	ck_assert (!is_voice(GENITIVE));
	ck_assert (!is_voice(DATIVE));
	ck_assert (!is_voice(ACCUSATIVE));
	ck_assert (!is_voice(ABLATIVE));
	ck_assert (!is_voice(VOCATIVE));
	ck_assert (!is_voice(LOCATIVE));

	ck_assert (!is_voice(FIRST_PERSON));
	ck_assert (!is_voice(SECOND_PERSON));
	ck_assert (!is_voice(THIRD_PERSON));

	ck_assert (!is_voice(POSITIVE));
	ck_assert (!is_voice(COMPARATIVE));
	ck_assert (!is_voice(SUPERLATIVE));

	ck_assert (is_voice(ACTIVE));
	ck_assert (is_voice(PASSIVE));

	ck_assert (!is_voice(PRESENT));
	ck_assert (!is_voice(IMPERFECT));
	ck_assert (!is_voice(FUTURE));
	ck_assert (!is_voice(PERFECT));
	ck_assert (!is_voice(PLUPERFECT));
	ck_assert (!is_voice(FUTURE_PERFECT));

	ck_assert (!is_voice(INDICATIVE));
	ck_assert (!is_voice(IMPERATIVE));
	ck_assert (!is_voice(SUBJUNCTIVE));
	ck_assert (!is_voice(PARTICIPLE));
	ck_assert (!is_voice(INFINITIVE));
}
END_TEST

START_TEST(check_is_tense)
{
	ck_assert (!is_tense (UNDEFINED));

	ck_assert (!is_tense (NOUN));
	ck_assert (!is_tense (PRONOUN));
	ck_assert (!is_tense (ADJECTIVE));
	ck_assert (!is_tense (VERB));
	ck_assert (!is_tense (ADVERB));
	ck_assert (!is_tense (PREPOSITION));
	ck_assert (!is_tense (CONJUNCTION));
	ck_assert (!is_tense (INTERJECTION));

	ck_assert (!is_tense(SINGULAR));
	ck_assert (!is_tense(PLURAL));

	ck_assert (!is_tense(MASCULINE));
	ck_assert (!is_tense(FEMININE));
	ck_assert (!is_tense(NEUTER));

	ck_assert (!is_tense(NOMINATIVE));
	ck_assert (!is_tense(GENITIVE));
	ck_assert (!is_tense(DATIVE));
	ck_assert (!is_tense(ACCUSATIVE));
	ck_assert (!is_tense(ABLATIVE));
	ck_assert (!is_tense(VOCATIVE));
	ck_assert (!is_tense(LOCATIVE));

	ck_assert (!is_tense(FIRST_PERSON));
	ck_assert (!is_tense(SECOND_PERSON));
	ck_assert (!is_tense(THIRD_PERSON));

	ck_assert (!is_tense(POSITIVE));
	ck_assert (!is_tense(COMPARATIVE));
	ck_assert (!is_tense(SUPERLATIVE));

	ck_assert (!is_tense(ACTIVE));
	ck_assert (!is_tense(PASSIVE));

	ck_assert (is_tense(PRESENT));
	ck_assert (is_tense(IMPERFECT));
	ck_assert (is_tense(FUTURE));
	ck_assert (is_tense(PERFECT));
	ck_assert (is_tense(PLUPERFECT));
	ck_assert (is_tense(FUTURE_PERFECT));

	ck_assert (!is_tense(INDICATIVE));
	ck_assert (!is_tense(IMPERATIVE));
	ck_assert (!is_tense(SUBJUNCTIVE));
	ck_assert (!is_tense(PARTICIPLE));
	ck_assert (!is_tense(INFINITIVE));
}
END_TEST

START_TEST(check_is_mood)
{
	ck_assert (!is_mood (UNDEFINED));

	ck_assert (!is_mood (NOUN));
	ck_assert (!is_mood (PRONOUN));
	ck_assert (!is_mood (ADJECTIVE));
	ck_assert (!is_mood (VERB));
	ck_assert (!is_mood (ADVERB));
	ck_assert (!is_mood (PREPOSITION));
	ck_assert (!is_mood (CONJUNCTION));
	ck_assert (!is_mood (INTERJECTION));

	ck_assert (!is_mood(SINGULAR));
	ck_assert (!is_mood(PLURAL));

	ck_assert (!is_mood(MASCULINE));
	ck_assert (!is_mood(FEMININE));
	ck_assert (!is_mood(NEUTER));

	ck_assert (!is_mood(NOMINATIVE));
	ck_assert (!is_mood(GENITIVE));
	ck_assert (!is_mood(DATIVE));
	ck_assert (!is_mood(ACCUSATIVE));
	ck_assert (!is_mood(ABLATIVE));
	ck_assert (!is_mood(VOCATIVE));
	ck_assert (!is_mood(LOCATIVE));

	ck_assert (!is_mood(FIRST_PERSON));
	ck_assert (!is_mood(SECOND_PERSON));
	ck_assert (!is_mood(THIRD_PERSON));

	ck_assert (!is_mood(POSITIVE));
	ck_assert (!is_mood(COMPARATIVE));
	ck_assert (!is_mood(SUPERLATIVE));

	ck_assert (!is_mood(ACTIVE));
	ck_assert (!is_mood(PASSIVE));

	ck_assert (!is_mood(PRESENT));
	ck_assert (!is_mood(IMPERFECT));
	ck_assert (!is_mood(FUTURE));
	ck_assert (!is_mood(PERFECT));
	ck_assert (!is_mood(PLUPERFECT));
	ck_assert (!is_mood(FUTURE_PERFECT));

	ck_assert (is_mood(INDICATIVE));
	ck_assert (is_mood(IMPERATIVE));
	ck_assert (is_mood(SUBJUNCTIVE));
	ck_assert (is_mood(PARTICIPLE));
	ck_assert (is_mood(INFINITIVE));
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

	tcase_add_test (tc_core, check_is_part_of_speech);
	tcase_add_test (tc_core, check_is_gender);
	tcase_add_test (tc_core, check_is_person);
	tcase_add_test (tc_core, check_is_number);
	tcase_add_test (tc_core, check_is_case);
	tcase_add_test (tc_core, check_is_tense);
	tcase_add_test (tc_core, check_is_voice);
	tcase_add_test (tc_core, check_is_mood);
	tcase_add_test (tc_core, check_is_degree);

	suite_add_tcase (s, tc_core);

	sr = srunner_create (s);

	srunner_set_fork_status (sr, CK_NOFORK);
	srunner_run_all(sr, CK_VERBOSE);
	number_failed = srunner_ntests_failed (sr);
	srunner_free (sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
