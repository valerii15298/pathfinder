#include "libmx.h"
#include "path.h"

void mx_print_path(int *route, char **names, int end) {
    mx_print_line();
    mx_printstr("Path: ");
    mx_printstr(names[*route]);
    mx_printstr(" -> ");
    mx_printstr(names[end]);
    mx_printstr("\nRoute: ");
    while (*(route + 1) != -1) {
        mx_printstr(names[*(route++)]);
        mx_printstr(" -> ");
    }
    mx_printstr(names[*route]);
    mx_printstr("\nDistance: ");
}
