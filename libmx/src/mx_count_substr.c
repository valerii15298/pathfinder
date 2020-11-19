#include "libmx.h"

int mx_count_substr(const char *str, const char *sub){
	if (!str || !sub)
		return -1;
	int rez = 0, sub_len = mx_strlen(sub);
	for (str = mx_strstr(str, sub); str && *sub; rez++)
		str = mx_strstr(str + sub_len, sub);
	return rez;
}
