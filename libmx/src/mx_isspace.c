#include "libmx.h"

bool mx_isspace(char c){
	return (c == ' ') || (c == '\f') || (c == '\n')
		|| (c == '\r') || (c == '\t') || (c == '\v');
}
