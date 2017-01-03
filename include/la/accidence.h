#ifndef __ACCIDENCE_H__
#define __ACCIDENCE_H__

#include <stdint.h>
#include <stdbool.h>

typedef uint32_t	la_accident_t;

const static la_accident_t UNDEFINED = 0;

/* Parts of Speech */
const static la_accident_t PART_OF_SPEECH  = (((la_accident_t) 0xf0) << 16);// 11110000 00000000 00000000
const static la_accident_t NOUN		= (((la_accident_t) 1) << 20);	// 00010000 00000000 00000000
const static la_accident_t PRONOUN	= (((la_accident_t) 2) << 20);	// 00100000 00000000 00000000
const static la_accident_t ADJECTIVE	= (((la_accident_t) 3) << 20);	// 00110000 00000000 00000000
const static la_accident_t VERB		= (((la_accident_t) 4) << 20);	// 01000000 00000000 00000000
const static la_accident_t ADVERB	= (((la_accident_t) 5) << 20);	// 01010000 00000000 00000000
const static la_accident_t PREPOSITION	= (((la_accident_t) 6) << 20);	// 01100000 00000000 00000000
const static la_accident_t CONJUNCTION	= (((la_accident_t) 7) << 20);	// 01110000 00000000 00000000
const static la_accident_t INTERJECTION	= (((la_accident_t) 8) << 20);	// 10000000 00000000 00000000

bool is_part_of_speech(la_accident_t val);

/* Number */
const static la_accident_t NUMBER	= (((la_accident_t) 0x0c) << 16);// 00001100 00000000 00000000
const static la_accident_t SINGULAR	= (((la_accident_t) 1) << 18);	// 00000100 00000000 00000000
const static la_accident_t PLURAL	= (((la_accident_t) 2) << 18);	// 00001000 00000000 00000000

bool is_number(la_accident_t val);

/* Gender */
const static la_accident_t GENDER	= (((la_accident_t) 0xe0) << 8);// 00000000 11100000 00000000
const static la_accident_t MASCULINE	= (((la_accident_t) 1) << 13);	// 00000000 00100000 00000000
const static la_accident_t FEMININE	= (((la_accident_t) 2) << 13);	// 00000000 01000000 00000000
const static la_accident_t NEUTER	= (((la_accident_t) 4) << 13);	// 00000000 10000000 00000000

bool is_gender(la_accident_t val);

/* Case */
const static la_accident_t CASE		= (((la_accident_t) 0x1c) << 8);// 00000000 00011100 00000000
const static la_accident_t NOMINATIVE	= (((la_accident_t) 1) << 10);	// 00000000 00000100 00000000
const static la_accident_t GENITIVE	= (((la_accident_t) 2) << 10);	// 00000000 00001000 00000000
const static la_accident_t DATIVE	= (((la_accident_t) 3) << 10);	// 00000000 00001100 00000000
const static la_accident_t ACCUSATIVE	= (((la_accident_t) 4) << 10);	// 00000000 00010000 00000000
const static la_accident_t ABLATIVE	= (((la_accident_t) 5) << 10);	// 00000000 00010100 00000000
const static la_accident_t VOCATIVE	= (((la_accident_t) 6) << 10);	// 00000000 00011000 00000000
const static la_accident_t LOCATIVE	= (((la_accident_t) 7) << 10);	// 00000000 00011100 00000000

bool is_case(la_accident_t val);

/* Person */
const static la_accident_t PERSON	= (((la_accident_t) 0x03) << 16);// 00000011 00000000 00000000
const static la_accident_t FIRST_PERSON	= (((la_accident_t) 1) << 16);	// 00000001 00000000 00000000
const static la_accident_t SECOND_PERSON= (((la_accident_t) 2) << 16);	// 00000010 00000000 00000000
const static la_accident_t THIRD_PERSON	= (((la_accident_t) 3) << 16);	// 00000011 00000000 00000000

bool is_person(la_accident_t val);

/* Degree */
const static la_accident_t DEGREE	= (((la_accident_t) 0x03) << 8);// 00000000 00000011 00000000
const static la_accident_t POSITIVE	= (((la_accident_t) 1) << 8);	// 00000000 00000001 00000000
const static la_accident_t COMPARATIVE	= (((la_accident_t) 2) << 8);	// 00000000 00000010 00000000
const static la_accident_t SUPERLATIVE	= (((la_accident_t) 3) << 8);	// 00000000 00000011 00000000

bool is_degree(la_accident_t val);

/* Voice */
const static la_accident_t VOICE	= (((la_accident_t) 0xc0) << 0);// 00000000 00000000 11000000
const static la_accident_t ACTIVE	= (((la_accident_t) 1) << 6);	// 00000000 00000000 01000000
const static la_accident_t PASSIVE	= (((la_accident_t) 2) << 6);	// 00000000 00000000 10000000

bool is_voice(la_accident_t val);

/* tense */
const static la_accident_t TENSE	= (((la_accident_t) 0x38) << 0);// 00000000 00000000 00111000
const static la_accident_t PRESENT	= (((la_accident_t) 1) << 3);	// 00000000 00000000 00001000
const static la_accident_t IMPERFECT	= (((la_accident_t) 2) << 3);	// 00000000 00000000 00010000
const static la_accident_t FUTURE	= (((la_accident_t) 3) << 3);	// 00000000 00000000 00011000
const static la_accident_t PERFECT	= (((la_accident_t) 4) << 3);	// 00000000 00000000 00100000
const static la_accident_t PLUPERFECT	= (((la_accident_t) 5) << 3);	// 00000000 00000000 00101000
const static la_accident_t FUTURE_PERFECT= (((la_accident_t) 6) << 3);	// 00000000 00000000 00110000

bool is_tense(la_accident_t val);

/* mood */
const static la_accident_t MOOD		= (((la_accident_t) 0x07) << 0);// 00000000 00000000 00000111
const static la_accident_t INDICATIVE	= (((la_accident_t) 1) << 0);	// 00000000 00000000 00000001
const static la_accident_t IMPERATIVE	= (((la_accident_t) 2) << 0);	// 00000000 00000000 00000010
const static la_accident_t SUBJUNCTIVE	= (((la_accident_t) 3) << 0);	// 00000000 00000000 00000011
const static la_accident_t PARTICIPLE	= (((la_accident_t) 4) << 0);	// 00000000 00000000 00000100
const static la_accident_t INFINITIVE	= (((la_accident_t) 5) << 0);	// 00000000 00000000 00000101

bool is_mood(la_accident_t val);

#endif /* __ACCIDENCE_H__ */
