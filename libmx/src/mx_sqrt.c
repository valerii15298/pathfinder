#include "libmx.h"

int mx_sqrt(int x){
	int h = x / 2 + 1, left = 1, right = (h < 46340) ? h : 46340, middle;
	while (left <= right){
		middle = left + (right - left) / 2;
		h = x / middle;
		if (h == middle)
			return ((x % middle) == 0) ? middle : 0;
		(h > middle) ? (left = middle + 1) : (right = middle - 1);
	}
	return 0;
}
