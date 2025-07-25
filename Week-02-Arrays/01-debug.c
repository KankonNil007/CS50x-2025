#include <stdio.h>
#include <cs50.h>

void show_lines(int height);

int main(void)
{
    int height = get_int("Height: ");
    show_lines(height);
}

void show_lines(int height)
{
    for (int i = 0; i < height; i++)
    {
        printf("#\n");
    }
}