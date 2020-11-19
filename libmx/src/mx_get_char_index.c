#include "libmx.h"

int mx_get_char_index(const char *str, char c){
	if (!str)
		return -2;
	int i;
	for (i = 0; str[i] && (str[i] != c); i++);
	return (str[i] == c) ? i : -1;
}
