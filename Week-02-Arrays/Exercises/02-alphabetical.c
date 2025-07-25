#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Argument Missing!!\n");
        return 1;
    }

    string word = argv[1];

    for (int i = 0; i < strlen(word); i++)
    {
        if (!isalpha(word[i]))
        {
            printf("Not a Word!!!\n");
            return 2;
        }
    }

    for (int i = 1, n = strlen(word); i < n; i++)
    {
        if (word[i] < word[i - 1])
        {
            printf("No. The word is not Alphabetical.\n");
            return 0;
        }
    }

    printf("Yes. The word is Alphabetical.\n");
}