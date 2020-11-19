#include "libmx.h"
#include "path.h"

void mx_handle_island(
    int *arr, int **bridges, int *lengths, t_list ***routes) {
    int i = arr[0],
        min_index = arr[1],
        temp_len;
    _Bool k = (_Bool)arr[2];

    if (i != min_index && (bridges[i][min_index] != MAX_WAY)
        && !k && ((temp_len = (lengths[min_index]
            + bridges[min_index][i])) <= lengths[i])) {
        if (temp_len < lengths[i]) {
            lengths[i] = temp_len;
            mx_clear_list(&(*routes)[i]);
        }
        mx_append_list(&(*routes)[i], (*routes)[min_index], i);
    }
}
