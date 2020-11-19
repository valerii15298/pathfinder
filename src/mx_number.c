#include "libmx.h"
#include "path.h"

int mx_number(char *str) {
    int result;

    if (!mx_valid_num(str)) {
        return -1;
    }
    for(result = 0; *str; str++) {
        result = result * 10 + (int)(*str - '0');
    }
    return result;
}
