#include <stdio.h>
#include <cs50.h>
#include <string.h>

int length(string s);

int main(void)
{
    string name = get_string("Name: ");

    // Automatically Printing Length of a String
    int lenAuto = strlen(name);

    // Manually Printing Length of a String
    int lenManual = length(name);

    printf("Length: %i\n", lenAuto);
    printf("Length: %i\n", lenManual);
}

int length(string s)
{
    int sum = 0;
    while (s[sum] != '\0')
    {
        sum++;
    }
    return sum;
}