#include <stdio.h>
// #include <cs50.h>

int main(void) {
    // int x = get_int("Input Value of x: ");
    // int y = get_int("Input Value of y: ");

    int x, y;

    printf("Input Value of x: ");
    scanf("%i", &x);

    printf("Input Value of y: ");
    scanf("%i", &y);

    if (x > y)
    {
        printf("x is greater than y.\n");
    }
    else if (x < y)
    {
        printf("x is less than y.\n");
    }
    else
    {
        printf("x is equal to y.\n");
    }
}