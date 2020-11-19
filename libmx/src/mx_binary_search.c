#include "libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count){
	int left = 0, right = size - 1, middle, h;
	for (*count = 1; left <= right; (*count)++){
		middle = left + (right - left) / 2;
		h = mx_strcmp(arr[middle], s);
		if (h == 0)
			return middle;
		(h < 0) ? (left = middle + 1) : (right = middle - 1);
	}
	*count = 0;
	return -1;
}
