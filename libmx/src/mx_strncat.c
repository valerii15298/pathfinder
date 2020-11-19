#include "libmx.h"

char *mx_strncat(char *restrict s1, const char *restrict s2, size_t len){
	for (int k = mx_strlen(s1); (len-- > 0) && (s1[k++] = *s2); s2++);
	return s1;
}
