#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int valueCalc(string s);

int main(void)
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");

    int score1 = valueCalc(p1);
    int score2 = valueCalc(p2);

    if (score1 > score2)
    {
        printf("Player 1 Wins!!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 Wins!!\n");
    }
    else
    {
        printf("Tie!!\n");
    }
}

int valueCalc(string s)
{
    int array1[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isupper(s[i]))
        {
            sum = sum + array1[s[i] - 65];
        }
        else if (islower(s[i]))
        {
            sum = sum + array1[s[i] - 97];
        }
    }

    return sum;
}
