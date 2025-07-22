#include <stdio.h>
// #include <cs50.h>

int main(void) {
    // char c = get_char("Do you Agree? ");

    char c;
    printf("Do you Agree? ");
    scanf("%c", &c);

    if (c == 'y' || c == 'Y')
    {
        printf("Terms and Conditions Agreed!!");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Terms and Conditions not Agreed!!");
    }
    else
    {
        printf("Invalid Choice!!!!!");
    }

}