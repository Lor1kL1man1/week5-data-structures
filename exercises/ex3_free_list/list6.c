// list6.c
// CS50x – Week 5 | Exercise 3: Free a Linked List
//
// Builds a linked list of 3 integers (prepend), prints them,
// then frees ALL allocated memory — safely and completely.
//
// Compile: make list6
// Run:     ./list6
// Check:   valgrind ./list6

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // The head of the list
    node *list = NULL;

    // Build list (same as Exercise 2 — now complete, no TODOs here)
    for (int i = 0; i < 3; i++)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = get_int("Number: ");
        n->next = NULL;

        // Prepend
        n->next = list;
        list = n;
    }

    // Print the list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }

    // -----------------------------------------------------------
    // TODO: Free every node in the list.
    //
    // IMPORTANT: You cannot do this:
    //   free(ptr);
    //   ptr = ptr->next;   ← ptr is already freed! CRASH.
    //
    // You MUST save the next pointer before freeing:
    //   node *next = ptr->next;
    //   free(ptr);
    //   ptr = next;
    //
    // Start with: node *ptr = list;
    // Then write a while loop that runs as long as ptr != NULL
    // -----------------------------------------------------------

    node *ptr = list;
    while (ptr != NULL)
    {
        // TODO: Save ptr->next into a variable called next
        // TODO: free(ptr)
        // TODO: ptr = next
    }

    return 0;
}
