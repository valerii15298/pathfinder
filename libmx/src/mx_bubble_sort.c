#include "libmx.h"

int mx_bubble_sort(char **arr, int size){
	char *c;
   	int count = 0;
	for (int i = 0; i < size - 1; i++)
        	for (int j = 1; j < size; j++)
        		if (mx_strcmp(arr[j - 1], arr[j]) > 0) {
                		c = arr[j];
                		arr[j] = arr[j - 1];
                		arr[j - 1] = c;
                		count++;
			}
	return count;
}
