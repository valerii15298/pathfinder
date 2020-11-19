#include "libmx.h"
#include "path.h"

bool mx_valid_line(char *start, char *end, char *path) {
    if (!end || !path || (end >= path))
        return false;
    *(end++) = '\0';
    *(path++) = '\0';
    if (!(*start) || !(*end) || !(*path)
        || !mx_valid_name(start) || !mx_valid_name(end)
        || !mx_valid_num(path))
    {
        return false;
    }
    return true;
}
