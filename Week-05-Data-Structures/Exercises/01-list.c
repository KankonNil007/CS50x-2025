#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    string phrase;
    struct node *next;
} node;

const int LIST_SIZE = 3; 

bool unload(node *list);

int main(void)
{
    node *list = NULL;

    for (int i = 0; i < LIST_SIZE; i++)
    {
        string phrase = get_string("Enter Text: ");

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            printf("Error Allocating Memory!!\n");
            return 1;
        }

        n->phrase = phrase;
        n->next = NULL;

        // If list is empty
        if (list == NULL)
        {
            // This node is the whole list
            list = n;
        }

        // If list has numbers already
        else
        {
            // Iterate over nodes in list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // If at end of list
                if (ptr->next == NULL)
                {
                    // Append node
                    ptr->next = n;
                    break;
                }
            }
        }

    }

    // Print numbers
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%s\n", ptr->phrase);
    }

    if (!unload(list))
    {
        printf("Error freeing the List!\n");
        return 1;
    }

    printf("Freed the List!\n");
    return 0;
    
}

bool unload(node *list)
{
    node *ptr = list;

    while (ptr != NULL)
    {
        ptr = list->next;
        free(list);
        list = ptr;
    }

    return true;    
}
