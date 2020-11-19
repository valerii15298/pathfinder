#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)){
    if (!lst || !cmp)
        return lst;
    void *c;
    for (t_list *i = lst; i -> next; i = i -> next)
        for (t_list *j = i -> next; j; j = j -> next)
            if (cmp(i -> data, j -> data)){
                c = i -> data;
                i -> data = j -> data;
                j -> data = c;
            }
    return lst;
}

