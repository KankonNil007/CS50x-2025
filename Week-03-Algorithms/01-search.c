#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int numbers[] = {5, 100, 20, 50, 500, 10};

    int num = get_int("Number: ");

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == num)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}