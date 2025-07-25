#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// string uppercaseManual(string s);
// string uppercaseAuto(string s);

int main(void)
{
    string name = get_string("Name: ");
    // string str1 = uppercaseManual(name);
    // string str2 = uppercaseAuto(name);

    // Manually converting to Uppercase
    printf("Uppercase Output: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - 32);
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");

    // Automatically converting to Uppercase
    printf("Uppercase Output: ");
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}

// string uppercaseManual(string s)
// {

// }

// string uppercaseAuto(string s)
// {

// }