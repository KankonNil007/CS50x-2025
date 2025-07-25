#include <stdio.h>
#include <cs50.h>

int main(void) {
    long dollars = 1;

    while (true)
    {
        printf("You have $%li dollars. Do you want to double it and give it to the next person? ", dollars);
        char confirmation = get_char("");

        if (confirmation == 'y') {
            dollars *= 2;
        }
        else {
            break;
        }
    }

    printf("You have $%li dollars\n", dollars);
    return 0;
}