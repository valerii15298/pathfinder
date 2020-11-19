#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
	const char *haystack = big;
	if (big_len < little_len || little_len == 0)
		return NULL;
	while ((big_len >= little_len) && (mx_memcmp(haystack, little, little_len) != 0))
		haystack++, big_len--;
	return (big_len >= little_len) ? (void *)haystack : NULL;
}
