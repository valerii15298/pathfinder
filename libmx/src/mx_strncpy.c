#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len){
	for (int i = -1; (++i) < len; dst[i] = (*src ? *(src++) : '\0'));
	return dst;
}
