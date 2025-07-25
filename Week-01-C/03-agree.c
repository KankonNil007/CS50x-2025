#include <stdio.h>
#include <cs50.h>

int main(void) {
    char c = get_char("Do you Agree? ");

    if (c == 'y' || c == 'Y')
    {
        printf("Terms and Conditions Agreed!!\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Terms and Conditions not Agreed!!\n");
    }
    else
    {
        printf("Invalid Choice!!!!!\n");
    }

}