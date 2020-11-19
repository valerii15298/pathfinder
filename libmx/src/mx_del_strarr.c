#include "libmx.h"

void mx_del_strarr(char ***arr) {
    if (arr){
        if (*arr)
            for(int i = -1; (*arr)[++i]; mx_strdel(&((*arr)[i])));
        free(*arr);
        *arr = NULL;
    }
}
