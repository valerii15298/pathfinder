#include "libmx.h"
#include "path.h"

void mx_free_routes(t_list **routes, int count) {
    for (int i = 0; i < count; ++i) {
        mx_clear_list(&routes[i]);
    }
    free(routes);
}
