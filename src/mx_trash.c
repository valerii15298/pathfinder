#include "libmx.h"
#include "path.h"

void mx_trash(int **bridges, char **names, char *file_string) {
    free(names);
    free(file_string);
    mx_del_intarr(&bridges);
}
