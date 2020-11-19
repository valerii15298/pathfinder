#include "libmx.h"
#include "path.h"

bool mx_cmp_routes(void *path1, void *path2) {
    int *p1 = (int *)path1,
        *p2 = (int *)path2;
    
    while (*p1 != -1 && *p2 != -1) {
        if (*p1 != *p2) {
            return *p2 < *p1;
        }
        p1++, p2++;
    }
    return (*p1 != -1);
}
