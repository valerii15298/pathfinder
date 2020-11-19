#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){
	int len = mx_strlen(needle);
	if (len == 0)
		return (char *)haystack;
	if (mx_strlen(haystack) < len)
		return NULL;
	while (haystack[len - 1] && (mx_strncmp(haystack, needle, len) != 0) && (haystack++));
	return (haystack[len - 1]) ? (char *)haystack : NULL;
}
