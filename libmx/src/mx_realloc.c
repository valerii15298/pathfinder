#include "libmx.h"

void *mx_realloc(void *ptr, size_t size){
	if (!ptr)
		return malloc(size);
	if (size == 0){
		free(ptr);
		return NULL;
		}
	size_t len = mx_lib_max(size, mx_lib_strlen(ptr));
	void *dst = malloc(len);
	if (dst){
		mx_memmove(dst, ptr, mx_lib_min(len, malloc_size(ptr)));
		free(ptr);
	}
	return dst;
}
