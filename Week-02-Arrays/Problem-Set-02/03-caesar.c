#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2 || argv[1] < 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    string plText = get_string("Plain Text: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plText); i < n; i++)
    {
        if (isalpha(plText[i]))
        {
            if (isupper(plText[i]))
            {
                printf("%c", ((plText[i] - 65 + key) % 26) + 65);
            }
            else if (islower(plText[i]))
            {
                printf("%c", ((plText[i] - 97 + key) % 26) + 97);
            }
        }
        else
        {
            printf("%c", plText[i]);
        }
    }

    printf("\n");
}
