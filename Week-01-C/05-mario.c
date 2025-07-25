#include <stdio.h>
#include <cs50.h>

void rows(int n);
void print_rows(int bricks);

int main(void) {
    const int n = 3;
    for (int i = 0; i < n; i++) {
        rows(n);
    }

    int height;

    do {
        height = get_int("Input Pyramid Height: ");
    } while (height <= 0);

    for (int i = 0; i <= height; i++)
    {
        print_rows(i);
    }
}

void rows(int n) {
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    
}

void print_rows(int bricks)
{
    for (int i = 0; i < bricks; i++)
        {
            printf("#");
        }
        printf("\n");
}