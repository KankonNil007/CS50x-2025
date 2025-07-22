#include <stdio.h>

void rows(int n);

int main(void) {
    const int n = 3;
    for (int i = 0; i < n; i++) {
        rows(n);
    }
}

void rows(int n) {
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    
}