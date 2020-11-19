#include "libmx.h"
#include "path.h"

int main(int argc, char *argv[]) {
	int count;
	char *arr[2],
        **lines = mx_check(argc, argv, &(arr[0]), &count),
        **names;
    int **bridges = mx_initialize(&names, count);

    arr[1] = mx_parse_lines(bridges, names, lines, count);
    if (arr[1] || mx_arr_strlen(names) != count) {
        mx_trash(bridges, names, arr[0]);
        if (!arr[1] || *(arr[1]) == '0')
            mx_error(5, NULL);
        mx_error(4, arr[1]);
    }
    mx_run(names, bridges, count);
    mx_trash(bridges, names, arr[0]);
    return 0;
}
