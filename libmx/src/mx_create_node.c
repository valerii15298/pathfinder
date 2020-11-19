#include "libmx.h"

t_list *mx_create_node(void *data)
{
    t_list *p = (t_list *)malloc(sizeof(t_list));
    if (p){
        p->data = data;
        p->next = NULL;
        }
    return p;
}

