#include "libmx.h"
#include "path.h"

void mx_del_intarr(int ***arr) {
    if (arr) {
        if (*arr)
            for(int i = -1; (*arr)[++i]; free((*arr)[i]));
        free(*arr);
        *arr = NULL;
    }
}
