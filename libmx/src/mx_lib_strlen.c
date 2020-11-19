#include "libmx.h"

size_t mx_lib_strlen(const char *s){
    size_t i = 0;
    while (s[i++]);
    return --i;
}
