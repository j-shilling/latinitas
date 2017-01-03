#include <stdbool.h>

#include <la/accidence.h>

inline bool is_part_of_speech(la_accident_t val) { return (0 < (val & PART_OF_SPEECH)) ? true : false; }
inline bool is_number(la_accident_t val) { return (0 < (val & NUMBER)) ? true : false; }
inline bool is_gender(la_accident_t val) { return (0 < (val & GENDER)) ? true : false; }
inline bool is_case(la_accident_t val) { return (0 < (val & CASE)) ? true : false; }
inline bool is_person(la_accident_t val) { return (0 < (val & PERSON)) ? true : false; }
inline bool is_degree(la_accident_t val) { return (0 < (val & DEGREE)) ? true : false; }
inline bool is_voice(la_accident_t val) { return (0 < (val & VOICE)) ? true : false; }
inline bool is_tense(la_accident_t val) { return (0 < (val & TENSE)) ? true : false; }
inline bool is_mood(la_accident_t val) { return (0 < (val & MOOD)) ? true : false; }
