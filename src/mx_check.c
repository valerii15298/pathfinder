#include "libmx.h"
#include "path.h"

char **mx_check(int argc, char *argv[], char **file_string, int *count) {
    char **lines;

    if (argc != 2)
    	mx_error(0, NULL);
    *file_string = mx_file_to_str(argv[1]);
    if (!(*file_string)) {
        free(*file_string);
    	mx_error(1, argv[1]);
    }
    if (mx_strlen(*file_string) == 0) {
        free(*file_string);
    	mx_error(2, argv[1]);
    }
    lines = mx_lines_split(*file_string, '\n');
    if ((*count = mx_number(lines[0])) < 0) {
		free(*file_string);
		mx_error(3, NULL);
	}
    return lines;
}
