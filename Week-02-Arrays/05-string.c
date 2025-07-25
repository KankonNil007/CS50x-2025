#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Name: ");

    printf("Output: ");

    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}