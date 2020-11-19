#include "libmx.h"
#include "path.h"

int mx_arrstr(char **arr, char *str) {
    for (int i = 0; arr[i]; ++i) {
        if (!mx_strcmp(arr[i], str)) {
            return i;
        }
    }
    return -1;
}
