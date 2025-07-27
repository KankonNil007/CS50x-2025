#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string games[] = {"clash of clans", "clash royale", "free fire", "pubg", "call of duty", "chess", "carrom king"};

    string inpGame = get_string("Enter Game Name: ");

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(games[i], inpGame) == 0)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not Found.\n");
    return 1;
}