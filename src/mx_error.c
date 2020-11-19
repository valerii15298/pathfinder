#include "libmx.h"
#include "path.h"

void mx_error(int num, char *message) {
	char *start[] = {
		"usage: ./pathfinder [filename]",
		"error: file ", "error: file ",
		"error: line 1 is not valid", "error: line ",
		"error: invalid number of islands"
	},
	*end[] = {
		"\n", " does not exist\n", " is empty\n",
		"\n", " is not valid\n", "\n"
	};
	
	write(2, start[num], mx_strlen(start[num]));
	if (message) {
		write(2, message, mx_strlen(message));
		if (num == 4)
			free(message);
	}
	write(2, end[num], mx_strlen(end[num]));
	exit(0);
}
