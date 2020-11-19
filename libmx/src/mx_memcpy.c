#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n){
	const char *src_char = src;
	for (char *p1 = dst; n-- > 0; p1++, src_char++)
		*p1 = *src_char;
	return dst;
}
