// list3.c
// CS50x – Week 5 | Exercise 2: Prepend to a Linked List
//
// Builds a linked list of 3 integers by prepending each new
// node to the FRONT of the list.
//
// Compile: make list3
// Run:     ./list3

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
    // The head of the list — starts empty
    node *list = NULL;

    // Build list: ask for 3 numbers and prepend each one
    for (int i = 0; i < 3; i++)
    {
        // Allocate memory for a new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }

        // Store the user's number and set next to NULL for now
        n->number = get_int("Number: ");
        n->next = NULL;

        // TODO: Prepend this node to the front of list.
        // Two lines are needed:
        //   Line 1: Make n->next point to the current head of the list
        //   Line 2: Make list point to n (n is now the new head)

        // TODO: Line 1 – n->next = ???
        // TODO: Line 2 – list = ???
    }

    // TODO (bonus): Add a for loop here to print all numbers in the list.
    // Hint: for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    // What order do the numbers print in? Is that what you expected?

    return 0;
}
