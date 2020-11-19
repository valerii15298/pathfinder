#include "libmx.h"

void *mx_memset(void *b, int c, size_t len){
	for (unsigned char *ptr = b; len-- > 0; *(ptr++) = c);
	return b;
}
