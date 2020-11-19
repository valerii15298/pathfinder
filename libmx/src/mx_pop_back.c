#include "libmx.h"

void mx_pop_back(t_list **list){
    if (list == NULL)
        return;
    if(*list == NULL)
        return;
    if((*list) -> next == NULL){
        free(*list);
        *list = NULL;
        return;
    }
    t_list *last = *list;
    while(last -> next -> next != NULL)
        last = last -> next;
    free(last -> next);
    last -> next = NULL;
}

