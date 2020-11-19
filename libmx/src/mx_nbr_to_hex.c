#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
    int len = 0;
    if (nbr == 0)
        return mx_strdup("0");
    for (unsigned long nbr_copy = nbr; nbr_copy > 0; nbr_copy /= 16){
        len++;
    }
    char *rez = mx_strnew(len);
    if (rez)
        for (char *symbols = "0123456789abcdef"; nbr > 0; nbr /= 16){
            rez[--len] = symbols[nbr % 16];
        }
    return rez;
}
