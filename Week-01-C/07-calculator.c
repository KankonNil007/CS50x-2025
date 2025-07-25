#include <stdio.h>
#include <cs50.h>

int main(void) {    
    int x = get_int("Number x: ");
    int y = get_int("Number y: ");

    // Division

    printf("The Result of %i / %i is: %.3f\n", x, y, (float) x / y);
}