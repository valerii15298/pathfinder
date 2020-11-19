#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
	if (!str || !sub)
		return -2;
	if (*sub == '\0')
		return mx_strlen(str);
	sub = mx_strstr(str, sub);
	if (sub)
		return sub - str;
	return -1;
}
