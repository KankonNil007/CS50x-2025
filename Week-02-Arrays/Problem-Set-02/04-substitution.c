#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26)
    {
        printf("key must contain 26 Characters!\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Key Must Contain Alphabets!\n");
            return 1;
        }
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            if (i == k)
            {
                break;
            }
            else if (toupper(argv[1][i]) == toupper(argv[1][k]))
            {
                printf("Same character Exists!!\n");
                return 1;
            }
        }
    }

    string key = argv[1];

    string plText = get_string("Plain Text: ");

    printf("ciphertext: ");

    for (int i = 0, n = strlen(plText); i < n; i++)
    {
        if (isalpha(plText[i]))
        {
            if (isupper(plText[i]))
            {
                printf("%c", toupper(key[plText[i] - 65]));
            }
            else if (islower(plText[i]))
            {
                printf("%c", tolower(key[plText[i] - 97]));
            }
        }
        else
        {
            printf("%c", plText[i]);
        }
    }

    printf("\n");
}
