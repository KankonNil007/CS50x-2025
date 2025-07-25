#include <cs50.h>
#include <stdio.h>

int main(void) {
    printf("Welcome to Kankon's World!!\n");

    string name = get_string("What's Your Name? ");
    printf("Hello %s\n", name);
}