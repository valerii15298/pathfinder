#include "libmx.h"
#include "path.h"

int mx_intlen(int *arr) {
    int i = -1;
    
    while(arr[++i] != -1);
    return i;
}
