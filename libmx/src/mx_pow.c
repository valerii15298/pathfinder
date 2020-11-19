#include "libmx.h"

double mx_pow(double n, unsigned int pow){
	double rez = 1;
	while (pow-- > 0)
		rez *= n;
	return rez;
}
