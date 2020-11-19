#include "libmx.h"
#include "path.h"

t_list **mx_routes(int **bridges, int count, int num) {
    int *lengths = malloc(sizeof(int) * count),
        min_index,
        processed[count];
    t_list **routes = malloc(sizeof(t_list *) * count);

    for (int i = 0; i < count; routes[i++] = NULL) {
        processed[i] = 0;
        lengths[i] = MAX_WAY;
    }
    routes[num] = mx_create_node(mx_memcpy(
        malloc(sizeof(int) * 2), (int []){num, -1}, sizeof(int) * 2));
    for (lengths[num] = 0;
        (min_index = mx_min_index(lengths, count, processed)) != -1;
        processed[min_index] = 1)
        for (int i = 0; i < count; ++i)
            mx_handle_island((int []){i, min_index, processed[i]},
                bridges, lengths, &routes);
    mx_clear_list(&routes[num]);
    routes[num] = mx_create_node(lengths);
    return routes;
}
