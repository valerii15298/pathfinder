#include "libmx.h"
#include "path.h"

bool mx_valid_num(char *num) {
    if (!(*num) || (mx_strlen(num) > 1 && *num == '0'))
        return false;
    for (; mx_isdigit(*num); num++);
    return !(*num);
}
