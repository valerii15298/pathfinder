#include "libmx.h"
#include "path.h"

bool mx_valid_name(char *name) {
    for (; mx_isalpha(*name); name++);
    return !(*name);
}
