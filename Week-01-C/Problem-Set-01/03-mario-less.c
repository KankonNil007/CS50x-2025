// #include <cs50.h>
#include <stdio.h>

void rows(int bricks, int spaces);

int main(void)
{
    int height;
    do
    {
        // height = get_int("Enter Pyramid Height: ");
        printf("Enter Pyramid Height: ");
        scanf("%i", &height);
    }
    while (height <= 0);

    for (int i = 0; i < height; i++)
    {
        rows(i + 1, height - i - 1);
    }
}

void rows(int bricks, int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}
