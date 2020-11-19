#include "libmx.h"

void mx_printint(int n){
	if (n == 0)
		mx_printchar('0');
	else if (n == -2147483648)
		write(1, "-2147483648", 11);
	else {
		if (n < 0){
			mx_printchar('-');
			n = -n;
			}
		for (int r = 1000000000; r > 0; r /= 10)
			if (n >= r)
				mx_printchar(((n / r) % 10) + '0');
		}
}
