#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
	if (n == 0)
		return NULL;
	const unsigned char *str;
	unsigned char x = (unsigned char)c;
	for (str = (const unsigned char *)s + n - 1; (--n > 0) && (*str != x); str--);
	return (*str == x) ? (void *)str : NULL;
}
