// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    // string name = get_string("What's your name? ");
    char name[100];
    printf("What's your name? ");
    scanf(" %99s", &name);
    printf("hello, %s\n", name);
}
