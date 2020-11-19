#include "libmx.h"
#include "path.h"

void mx_print(char **names, int *arr, int *route, int **bridges) {
    mx_print_path(route, names, arr[0]);
    if (*(route + 2) != -1) {
        while (*(route + 2) != -1) {
            mx_printint(bridges[*route][*(1 + route)]);
            mx_printstr(" + ");
            route++;
        }
        mx_printint(bridges[*route][*(1 + route)]);
        mx_printstr(" = ");
    }
    mx_printint(arr[1]);
    mx_printchar('\n');
    mx_print_line();
}
