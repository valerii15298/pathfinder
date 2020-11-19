#include "libmx.h"

int mx_strlen(const char *s){
	int i = -1;
	while (s[++i]);
	return i;
}
