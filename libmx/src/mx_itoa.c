#include "libmx.h"

char *mx_itoa(int number){
    char *rez = mx_strnew(11);
    if (!rez)
        return NULL;
    unsigned int k = 0, num = (number >= 0) ? number : -number;
    if (number == 0)
        rez[k++] = '0';
    else {
        if (number < 0)
            rez[k++] = '-';
        for (unsigned int r = 1000000000; r > 0; r /= 10)
            if (num >= r)
                rez[k++] = '0' + ((num / r) % 10);
        }
    return mx_realloc(rez, (k + 1) * sizeof(char));
}
