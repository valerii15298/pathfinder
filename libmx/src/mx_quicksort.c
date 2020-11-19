#include "libmx.h"

static void mx_swap(int *len, char **arr, int l, int r, int *swaps){
    char *c;
    int s;
    if (len[l] > len[r]){
	    c = arr[l];
	    arr[l] = arr[r];
	    arr[r] = c;
        s = len[l];
        len[l] = len[r];
        len[r] = s;
        (*swaps)++;
    }
}

static void mx_add_part(t_list **list, int l, int r){
    if (r > l){
        int *node = malloc(sizeof(int) * 2);
        node[0] = l;
        node[1] = r;
        mx_push_front(list, node);
    }
}

int mx_quicksort(char **arr, int left, int right) {
    int swaps = 0, pivot, l, r;
    t_list *list = NULL;
    if (!arr)
        return -1;
    int *len = (int *)malloc(sizeof(int) * ((right - left) + 1)) - left;
    for (int i = left; i <= right; ++i)
        len[i] = mx_strlen(arr[i]);
    mx_add_part(&list, left, right);
    while (list) {
        l = (left = ((int *)list->data)[0]);
        r = (right = ((int *)list->data)[1]);
        free(list->data);
        mx_pop_front(&list);
        pivot = len[left + ((right - left) / 2)];
        while (l < r){
            while ((len[l] <= pivot) &&  ++l <= right);
        	while ((len[r] >= pivot) && --r >= left);
        	if (l < r)
                mx_swap(len, arr, l++, r--, &swaps);
        }
        for (int i = l; i <= right; ++i)
            if (len[i] == pivot)
                mx_swap(len, arr, l++, i, &swaps);
        mx_add_part(&list, l, right);
        for (int i = r; i >= left; --i)
            if (len[i] == pivot)
                mx_swap(len, arr, i, r--, &swaps);
        mx_add_part(&list, left, r);
    }
    free(len);
    return swaps;
}
