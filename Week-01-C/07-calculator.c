#include <stdio.h>

int main(void) {
    int x, y;
    
    printf("Number x: ");
    scanf("%i", &x);

    printf("Number y: ");
    scanf("%i", &y);

    // Division

    printf("The Result of %i / %i is: %.3f", x, y, (float) x / y);
}