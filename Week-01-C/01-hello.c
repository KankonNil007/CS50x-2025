// #include <cs50.h>
#include <stdio.h>

int main(void) {
    char name[100];
    printf("Welcome to Kankon's World!!\n");

    // string name = get_string("What's Your Name? ");
    printf("What's Your Name? ");
    scanf("%s", name);
    printf("Hello %s\n", name);
}