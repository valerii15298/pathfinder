#include "libmx.h"

char *mx_strchr(const char *str, char c){
    int temp = mx_get_char_index(str, c);
    return (temp >= 0) ? (char *)&str[temp] : NULL;
}
