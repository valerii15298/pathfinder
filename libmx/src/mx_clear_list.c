#include "libmx.h"

void mx_clear_list(t_list **list){
    if (list == NULL)
        return;
    t_list *temp;
    while((*list) != NULL){
        temp = (*list)->next;
        free((*list)->data);
        free(*list);
        *list = temp;
    }
}

