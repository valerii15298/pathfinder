#include "libmx.h"

void mx_push_front(t_list **list, void *data){
    if (list){
    	t_list *p = mx_create_node(data);
    	if (p){
        	p->data = data;
        	p->next = *list;
        	*list = p;
        }
    }
}

