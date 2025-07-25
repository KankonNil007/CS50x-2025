#include <stdio.h>

int main(void)
{
    int size = 5;
    int nums[size];
    nums[0] = 1;

    for (int i = 0;i < (size - 1); i++)
    {
        nums[i + 1] = nums[i] * 2;
    }

    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%i, ", nums[i]);
    }
    printf("\n");
}