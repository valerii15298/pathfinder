#include "libmx.h"

char *mx_strnew(const int size) {
    if (size < 0)
        return NULL;
    char *p = (char *) malloc(sizeof(char) * (size + 1));
    if (p)
    	for (int i = 0; i <= size; p[i++] = '\0'); 
    return p;
}
