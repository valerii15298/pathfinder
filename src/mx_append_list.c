#include "libmx.h"
#include "path.h"

void mx_append_list(t_list **list, t_list *push, int val) {
    for (int *temp, *tmp, len; push; push = push->next) {
        len = (mx_intlen(push->data) + 2) * sizeof(int);
        temp = malloc(len);
        mx_memmove(temp, push->data, len - sizeof(int));
        for (tmp = temp; *tmp != -1; ++tmp);
        *tmp = val;
        *(tmp + 1) = -1;
        mx_push_back(list, temp);
    }
}
