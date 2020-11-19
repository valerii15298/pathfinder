#include "libmx.h"

int mx_count_words(const char *str, char c){
	if (!(str--))
		return -1;
	if (c == '\0')
		return 1;
	int rez = 0;
	while (*(++str))
		if ((*str != c) && ++rez && !(str = mx_strchr(str, c)))
			return rez;
	return rez;
}
