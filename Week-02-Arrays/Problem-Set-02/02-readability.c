#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int letterCount(string s);
int wordCount(string s);
int sentenceCount(string s);

int main(void)
{
    string text = get_string("Input Text: ");

    int letters = letterCount(text);
    int words = wordCount(text);
    int sentences = sentenceCount(text);

    float grade = ((0.0588 * letters * 100) / words) - ((0.296 * sentences * 100) / words) - 15.8;
    // where L is the average number of letters per 100 words in the text,
    //  and S is the average number of sentences per 100 words in the text.

    int roundGrade = round(grade);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }

    for (int i = 1; i < 17; i++)
    {
        if (i == roundGrade)
        {
            printf("Grade %i\n", i);
            return 0;
        }
    }
}

int letterCount(string s)
{
    int letters = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (isalnum(s[i]))
        {
            letters++;
        }
    }
    return letters;
}

int wordCount(string s)
{
    int wordCount = 0;
    int inWord = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (isspace(s[i]))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            wordCount++;
        }
        i++;
    }
    return wordCount;
}

int sentenceCount(string s)
{
    int sentenceCount = 0;
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            sentenceCount++;
        }
        i++;
    }
    return sentenceCount;
}
