#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
} candidate;

int main(void)
{
    const int num = 3;
    candidate candidates[num];

    for (int i = 0; i < num; i++)
    {
        candidates[i].name = get_string("Name: ");
        candidates[i].votes = get_int("Votes: ");
    }

    int highest = 0;
    string highName = "";

    for (int i = 0; i < num; i++)
    {
        if (candidates[i].votes > highest)
        {
            highest = candidates[i].votes;
            highName = candidates[i].name;
        }
    }

    printf("Candidate %s has won with %i votes!!\n", highName, highest);
}
