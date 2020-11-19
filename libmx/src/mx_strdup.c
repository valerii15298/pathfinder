#include "libmx.h"

char *mx_strdup(const char *str) {
	char *rez = mx_strnew(mx_strlen(str));
	if (rez)
		mx_strcpy(rez, str);
	return rez;
}
