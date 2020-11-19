#include "libmx.h"
#include "path.h"

char *mx_parse_lines(int **bridges, char **names, char **lines, int count) {
    char *start,
        *end,
        *path, 
        *rez = NULL;

    for (int i = 1; lines[i]; ++i) {
        start = lines[i];
        end = mx_strchr(start, '-');
        path = mx_strchr(start, ',');
        if (!mx_valid_line(start, end++, path++))
            return mx_itoa(i + 1);
        if (!mx_update_names(names, start, count))
            rez = (rez) ? rez : mx_itoa(0);
        if (!mx_update_names(names, end, count))
            rez = (rez) ? rez : mx_itoa(0);
        if (!mx_parse_data((char *[]){start, end, path}, bridges, names))
            return mx_itoa(i + 1);
    }
    return rez;
}
