#include "libmx.h"

char *mx_strtrim(const char *str) {
	if (!str)
		return NULL;
	int left, right;
	for (left = 0; mx_isspace(str[left]); left++);
	if (!(str[left]))
		return mx_strdup("\0");
	for (right = mx_strlen(str) - 1; (right > -1) && mx_isspace(str[right]); right--);
	return mx_strndup(&str[left], right - left + 1);
}
