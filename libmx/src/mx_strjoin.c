#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (!s1 && !s2)
        return NULL;
    if (!s1 || !s2)
        return (s1) ? mx_strdup(s1) : mx_strdup(s2);
    char *p = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    if (p){
        mx_strcpy(p, s1);
        mx_strcat(p, s2);
    }
    return p;
}
