#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
//     if (argc == 2)
//     {
//         printf("Hello, %s\n", argv[1]);
//     }
//     else
//     {
//         printf("Hello, World!!");
//     }

    printf("Hello, ");

    for (int i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }

    printf("\n");
}