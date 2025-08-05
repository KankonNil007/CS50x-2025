#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s + 1));
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);
    // for (int i = 0, n = strlen(s); i <= n; i++)
    // {
    //     t[i] = s[i];
    // }

    if (strlen(s) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
}