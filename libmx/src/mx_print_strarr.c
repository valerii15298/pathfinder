#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim){
    if (delim && arr && *arr){
        for (mx_printstr(*arr); *(++arr); mx_printstr(*arr))
        	mx_printstr(delim);
        mx_printchar('\n');
    }
}
