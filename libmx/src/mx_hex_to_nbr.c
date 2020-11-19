#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex){
    unsigned long rez = 0;
    if (hex--)
        for (char c; *(++hex); rez = rez * 16 + (*hex) - c){
            c = (*hex <= '9') ? '0' : -10 + (*hex >= 'a' ? 'a' : 'A');
            }
    return rez;
}
