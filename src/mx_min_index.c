#include "libmx.h"
#include "path.h"

int mx_min_index(int *lenghts, int size, int *processed) {
    int index = -1;

    for (int i = 0; i < size; ++i)
        if (!processed[i] && (lenghts[i] != -1)
            && (index == -1 || (lenghts[i] < lenghts[index])))
            index = i;
    return index;
}
