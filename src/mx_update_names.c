#include "libmx.h"
#include "path.h"

bool mx_update_names(char **names, char *name, int count) {
    if (!count)
        return false;
    while (*names && mx_strcmp(*names, name)) {
        if (!(--count)) {
            return false;
        }
        ++names;
    }
    if (!(*names)) {
        *names = name;
    }
    return true;
}
