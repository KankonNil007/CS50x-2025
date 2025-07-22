#include <stdio.h>

int main(void) {
    long dollars = 1;

    while (1 < 5)
    {
        char confirmation;
        printf("You have $%li dollars. Do you want to double it and give it to the next person? ", dollars);
        scanf(" %c", &confirmation);
        if (confirmation == 'y') {
            dollars *= 2;
        }
        else {
            break;
        }
    }

    printf("You have $%li dollars", dollars);
    return 0;
}