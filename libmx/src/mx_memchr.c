#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
	if (n == 0)
		return NULL;
	const unsigned char *str;
	unsigned char x = (unsigned char)c;
	for (str = s; (--n > 0) && (*str != x); str++);
	return (*str == x) ? (void *)str : NULL;
}
