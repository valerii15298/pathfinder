#include "libmx.h"
#include "path.h"

int **mx_initialize(char ***names, int count) {
    int **bridges;
    
    *names = malloc(sizeof(char *) * (count + 1));
    (*names)[count] = NULL;
    bridges = malloc(sizeof(int *) * (count + 1));
    bridges[count] = NULL;
    for (int i = 0; i < count; ++i) {
        (*names)[i] = NULL;
        bridges[i] = malloc(sizeof(int) * count);
        for (int j = 0; j < count; ++j) {
            bridges[i][j] = ((i == j) ? 0 : MAX_WAY);
        }
    }
    return bridges;
}
