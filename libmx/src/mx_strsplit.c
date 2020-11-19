#include "libmx.h"

char **mx_strsplit(char const *s, char c) {
    if (!s)
        return NULL;
    int count = mx_count_words(s--, c), h = 0;
    char **arr = malloc((count + 1) * sizeof(char *)), *next;
    if (!arr)
        return NULL;
    arr[count] = NULL;
    while (*(++s))
        if (*s != c && ((next = mx_strchr(s, c)) || (next = mx_strchr(s, '\0'))) && (arr[h++] = mx_strndup(s, next - s)) && (s = next) && !(*s))
            return arr;
    return arr;
}
