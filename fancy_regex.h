void *get_regex(char *pattern);

void *get_matches(void *regex, char *data);

typedef struct matchIndex
{
    unsigned long position;
    unsigned long length;

} MatchIndex;

int next(void *matches, MatchIndex *match_dim);