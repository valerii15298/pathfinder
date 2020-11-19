#include "libmx.h"

int mx_count_subchr(const char *str, const char sub) {
	if (!(str--))
		return -1;
	int rez;
	for (rez = 0; *(++str); rez += (*str == sub) ? 1 : 0) {

    }
	return rez;
}
