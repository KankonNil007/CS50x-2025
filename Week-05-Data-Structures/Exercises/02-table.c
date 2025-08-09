#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    string text;
    struct node *next;
} node;

node *table[26];

int hash(string text);
bool unload(node *list);
void visualizer(node *list);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        string text = get_string("Enter Text: ");

        int bucket = hash(text);
        printf("%s hashes to %i\n", text, bucket);
    }
    
}


int hash(string text)
{
    return toupper(text[0]) - 'A';
}

bool unload(node *list)
{

}

void visualizer(node *list)
{

}
