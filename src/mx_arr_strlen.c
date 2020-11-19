#include "libmx.h"
#include "path.h"

int mx_arr_strlen(char **arr) {
    int i = -1;

    while (arr[++i]);
    return i;
}
