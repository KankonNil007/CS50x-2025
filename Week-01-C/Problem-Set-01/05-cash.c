// #include <cs50.h>
#include <stdio.h>

int main(void)
{
    int money;
    do
    {
        // money = get_int("Change owed: ");
        printf("Change owed: ");
        scanf("%i", &money);
    }
    while (money < 0);

    int quarters = 0;
    while (money >= 25)
    {
        money = money - 25;
        quarters++;
    }

    int dimes = 0;
    while (money >= 10)
    {
        money = money - 10;
        dimes++;
    }

    int nickels = 0;
    while (money >= 5)
    {
        money = money - 5;
        nickels++;
    }

    int coins = quarters + dimes + nickels + money;
    printf("%i\n", coins);
}