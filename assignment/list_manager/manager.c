// manager.c
// CS50x – Week 5 Assignment: List Manager
//
// Implement the three functions declared in manager.h.
// This is where all your linked list logic goes.
//
// Everything you need is in the three exercises:
//   prepend()    ← Exercise 2 (list3.c)
//   print_list() ← Exercise 2 bonus / list4.c / list5.c
//   free_list()  ← Exercise 3 (list6.c)

#include "manager.h"

#include <stdio.h>
#include <stdlib.h>

// -------------------------------------------------------
// prepend
// -------------------------------------------------------
// Allocates a new node, sets its number, and inserts it
// at the FRONT of the list. Returns the new head.
//
// Pattern (from list3.c):
//   n->next = list;
//   list = n;
//   return list;
node *prepend(node *list, int number)
{
    // TODO: Allocate a new node with malloc
    // TODO: Check if malloc returned NULL — if so, return list unchanged
    // TODO: Set n->number = number
    // TODO: Set n->next = NULL
    // TODO: Prepend n to the front of list (two lines from Exercise 2)
    // TODO: Return the new head

    return list; // Replace this line
}

// -------------------------------------------------------
// print_list
// -------------------------------------------------------
// Traverses the list from head to tail and prints each number.
// If the list is empty (NULL), prints "(empty)".
//
// Pattern (from list4.c / list5.c):
//   for (node *ptr = list; ptr != NULL; ptr = ptr->next)
//       printf("%i\n", ptr->number);
void print_list(node *list)
{
    if (list == NULL)
    {
        printf("(empty)\n");
        return;
    }

    // TODO: Use a for loop (or while loop) to print each number
    // Hint: for (node *ptr = list; ptr != NULL; ptr = ptr->next)
}

// -------------------------------------------------------
// free_list
// -------------------------------------------------------
// Frees every node in the list and returns NULL.
// The caller should do: list = free_list(list);
//
// Pattern (from list6.c):
//   node *next = ptr->next;
//   free(ptr);
//   ptr = next;
node *free_list(node *list)
{
    // TODO: Walk the list and free each node safely
    //       (save next BEFORE calling free — you know why!)

    return NULL; // This line is correct — keep it as the last line
}
