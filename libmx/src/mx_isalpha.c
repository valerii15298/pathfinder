#include "libmx.h"

bool mx_isalpha(int c){
	return (64 < c && c < 91) || (96 < c && c < 123);
}
