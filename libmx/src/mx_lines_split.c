#include "libmx.h"

char **mx_lines_split(char *s, char c) {
    if (!s)
        return NULL;
    int count = mx_count_subchr(s, c), h = 0;
    char **arr = malloc((count + 1) * sizeof(char *)), *next;
    if (!arr)
        return NULL;
    arr[count] = NULL;
    while ((next = mx_strchr(s, c))) {
        *next = '\0';
        arr[h++] = s;
        s = 1 + next;
    }
    if (*s != '\0') {
        arr = mx_realloc(arr, (count + 2) * sizeof(char *));
        *s = '\0';
        arr[count] = s;
        arr[count + 1] = NULL;
    }
    return arr;
}
