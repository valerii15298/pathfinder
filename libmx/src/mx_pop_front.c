#include "libmx.h"

void mx_pop_front(t_list **list){
    if (list == NULL)
        return;
    if(*list == NULL)
        return;
    t_list *new_list = (*list)->next;
    free(*list);
    *list = new_list;
}

