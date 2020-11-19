#include "libmx.h"

void mx_str_reverse(char *s){
	if (s)
		for (int i = -1, n = mx_strlen(s); (++i) < n / 2; mx_swap_char(&s[i], &s[n - i - 1]));
}
