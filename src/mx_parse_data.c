#include "libmx.h"
#include "path.h"

bool mx_parse_data(char **elements, int **bridges, char **names) {
    int a = mx_arrstr(names, elements[0]),
        b = mx_arrstr(names, elements[1]),
        num = mx_number(elements[2]);
    
    if (!mx_strcmp(elements[0], elements[1])) {
        return false;
    }
    if (a != -1 && b != -1) {
        bridges[a][b] = num;
        bridges[b][a] = num;
    }
    return true;
}
