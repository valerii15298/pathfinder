#include "libmx.h"
#include "path.h"

void mx_run(char **names, int **bridges, int count) {
    int *length;
    t_list **routes;

    for (int start = 0; start < count - 1; ++start) {
        routes = mx_routes(bridges, count, start);
        length = (int *)(routes[start]->data);
        for (int end = start + 1; end < count; ++end) {
            mx_sort_list(routes[end], mx_cmp_routes);
            for (t_list *path = routes[end]; path; path = path->next) {
                mx_print(names,
                (int []){end, length[end]},
                (int *)(path->data), bridges);
            }
        }
        mx_free_routes(routes, count);
    }
}
