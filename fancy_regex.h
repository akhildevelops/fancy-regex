#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * An iterator over all non-overlapping matches for a particular string.
 *
 * The iterator yields a `Result<Match>`. The iterator stops when no more
 * matches can be found.
 *
 * `'r` is the lifetime of the compiled regular expression and `'t` is the
 * lifetime of the matched string.
 */
typedef struct Matches Matches;

/**
 * A compiled regular expression.
 */
typedef struct Regex Regex;

/**
 * Free Matches
 */
typedef struct MatchIndex
{
    uintptr_t position;
    uintptr_t length;
} MatchIndex;

/**
 * adsf
 */
const struct Regex *get_regex(const char *pattern);

/**
 * asdf
 */
struct Matches *get_matches(const struct Regex *ext_regex, const char *ext_text);

/**
 * asdf
 */
bool next(struct Matches *matches, struct MatchIndex *element);
