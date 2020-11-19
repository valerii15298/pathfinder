#include "libmx.h"
#include "path.h"

void mx_print_line() {
    for (int i = 0; i < 40; ++i) {
        mx_printchar('=');
    }
    mx_printchar('\n');
}
