#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[0] = 34;
    x[1] = 38;
    x[2] = 74;
    free(x);

    // For (Linux- Ubuntu):
    // For Checking any Memory related Errors
    // valgrind ./output/04-memory
}