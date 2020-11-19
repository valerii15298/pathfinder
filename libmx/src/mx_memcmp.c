#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
	if (n == 0)
		return 0;
	const unsigned char *d1 = s1, *d2 = s2;
	while ((--n > 0) && *d1 && (*d1 == *d2) && d1++ && d2++);
	return (*d1 - *d2);
}
