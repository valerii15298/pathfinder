#ifndef PATH_H
#define PATH_H

#define MAX_WAY 999999999

void mx_error(int num, char *message);

bool mx_cmp_routes(void *path1, void *path2);

void mx_free_routes(t_list **routes, int count);

int mx_min_index(int *lenghts, int size, int *processed);

int mx_intlen(int *arr);

void mx_append_list(t_list **list, t_list *push, int val);

t_list **mx_routes(int **bridges, int count, int num);

void mx_print_line();

void mx_print(char **names, int *arr, int *route, int **bridges);

void mx_run(char **names, int **bridges, int count);

bool mx_valid_name(char *name);

bool mx_valid_num(char *num);

bool mx_update_names(char **names, char *name, int count);

int mx_arrstr(char **arr, char *str);

int mx_number(char *str);

char *mx_parse_lines(int **bridges, char **names, char **lines, int count);

void mx_del_intarr(int ***arr);

void mx_trash(int **bridges, char **names, char *file_string);

char **mx_check(int argc, char *argv[], char **file_string, int *count);

int **mx_initialize(char ***names, int count);

bool mx_valid_line(char *start, char *end, char *path);

bool mx_parse_data(char **elements, int **bridges, char **names);

void mx_print_path(int *route, char **names, int end);

void mx_handle_island(int *arr, int **bridges, int *lengths, t_list ***routes);

int mx_arr_strlen(char **arr);

#endif
