#ifndef __ACCIDENCE_H__
#define __ACCIDENCE_H__

#include <stdint.h>

#define UNDEFINED	0	// 0000

/* Parts of Speech */		// 4-bit
#define NOUN		1	// 0001
#define PRONOUN		2	// 0010
#define ADJECTIVE	3	// 0011
#define VERB		4	// 0100
#define ADVERB		5	// 0101
#define PREPOSITION	6	// 0110
#define CONJUNCTION	7	// 0111
#define INTERJECTION	8	// 1000

typedef uint8_t		la_part_of_speech_t;

/* Number */			// 2-bit
#define SINGULAR	1	// 01
#define PLURAL		2	// 10

typedef	uint8_t		la_number_t;

/* Gender */			// 3-bit
#define MASCULINE	1	// 001
#define FEMININE	2	// 010
#define NEUTER		4	// 100

typedef uint8_t		la_gender_t;

/* Case */			// 3-bit
#define NOMINATIVE	1	// 001
#define GENITIVE	2	// 010
#define DATIVE		3	// 011
#define ACCUSATIVE	4	// 100
#define ABLATIVE	5	// 101
#define VOCATIVE	6	// 110
#define LOCATIVE	7	// 111

typedef uint8_t		la_case_t;

/* Person */			// 2-bit
#define FIRST_PERSON	1	// 01
#define SECOND_PERSON	2	// 10
#define THIRD_PERSON	3	// 11

typedef uint8_t		la_person_t;

/* Degree */			// 2-bit
#define POSITIVE	1	// 01
#define COMPARATIVE	2	// 10
#define SUPERLATIVE	3	// 11

typedef uint8_t		la_degree_t;

/* Voice */			// 2-bit
#define ACTIVE		1	// 01
#define PASSIVE		2	// 10

typedef uint8_t		la_voice_t;

/* tense */			// 3-bit
#define PRESENT		1	// 001
#define IMPERFECT	2	// 010
#define FUTURE		3	// 011
#define PERFECT		4	// 100
#define PLUPERFECT	5	// 101
#define FUTURE_PERFECT	6	// 110

typedef uint8_t		la_tense_t;

/* mood */			// 3-bit
#define INDICATIVE	1	// 001
#define IMPERATIVE	2	// 010
#define SUBJUNCTIVE	3	// 011
#define PARTICIPLE	4	// 100
#define INFINITIVE	5	// 101

typedef uint8_t		la_mood_t;

#endif /* __ACCIDENCE_H__ */
