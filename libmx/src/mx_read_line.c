#include "libmx.h"

static t_r *new_remain(char *rem, int fd) {
	t_r *r = malloc(sizeof(t_r));
	r->fd = fd;
	r->data = rem;
	return r;
}

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
	static t_r *remain = NULL;
	size_t bytes = 0, count = 0;
	char *buf = malloc(buf_size);
	if (!lineptr)
		return -2;
	if (remain && (fd == remain->fd)) {
		*lineptr = remain->data;
		free(remain);
		remain = NULL;
	} else 
		*lineptr = mx_strdup("\0");
    for (char *temp; (bytes = read(fd, buf, buf_size)) > 0; ) {
		count = mx_strlen(*lineptr);
		*lineptr = mx_realloc(*lineptr, count * sizeof(char) + bytes + 1);
		for (size_t i = 0; i < bytes; ++i)
			(*lineptr)[count + i] = buf[i];
		(*lineptr)[count + bytes] = '\0';
        if ((delim != '\0') && (temp = mx_strchr(*lineptr, delim))) {
			*temp = '\0';
			remain = new_remain(mx_strdup(temp + 1), fd);
			temp = *lineptr;
			*lineptr = mx_strdup(*lineptr);
			free(temp);
			break;
		}
    }
	free(buf);
    return (bytes <= 0) ? (bytes == 0 ? -1 : -2) : mx_strlen(*lineptr);
}
