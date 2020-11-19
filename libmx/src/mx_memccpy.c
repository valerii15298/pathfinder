#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n){
	if (n == 0)
		return NULL;
	char *dst_char = dst;
	for (const char *src_char = src; (n-- > 0) && ((*dst_char = *(src_char++)) != c); )
		dst_char++;
	return (*dst_char == c) ? (void *)(++dst_char) : NULL;
}
