#include "libmx.h"

char *mx_file_to_str(const char *file){
	if (!file)
		return NULL;
	int fd = open(file, 'r'), len = 0, buf_size = 64, size = 0;
	char *rez;
	if (fd < 0)
		return NULL;
	for (char buf[buf_size]; (size = read(fd, &buf, buf_size)) > 0; len += size);
	close(fd);
	if (size < 0)
		return NULL;
	fd = open(file, 'r');
	if (fd < 0)
		return NULL;
	rez = mx_strnew(len);
	if (rez)
		size = read(fd, rez, len);
	close(fd);
	return (size < 0) ? NULL : rez;
}
