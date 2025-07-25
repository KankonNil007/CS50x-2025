#include <stdio.h>
#include <cs50.h>

void meowFor(int n);
// void meowWhile(int n);
int get_pos_num(void);

int main(void) {
    // meowWhile(3);
    int times = get_pos_num();
    meowFor(times);
}

void meowFor(int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}

int get_pos_num(void) {
    int n;

    do {
        n = get_int("Enter a Number: ");
    } while (n <= 0);

    return n;

}

// void meowWhile(int n) {
//     int i = 0;
//     while (i < n) {
//         printf("Meow\n");
//         i++;
//     }
// }