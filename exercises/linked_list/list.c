// list.c
// CS50x – Week 5 Exercise 2: Linked List
//
// TODO: Build a linked list that stores 5 words entered by the user.
//
// Requirements:
//   - Use malloc to create each node
//   - Define a node structure (provided below)
//   - Link all nodes together
//   - Print all words in the list
//   - Free all memory before exiting
//
// Compile: make list
// Run:     ./list

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ---------------------------------------------------------
// Node structure – do not modify this
// ---------------------------------------------------------
typedef struct node
{
    char word[50];
    struct node *next;
}
node;

// Function prototypes
void print_list(node *head);
void free_list(node *head);

int main(void)
{
    node *head = NULL; // The start of the list (empty for now)

    // TODO: Use a loop to collect 5 words from the user.
    //       For each word:
    //         1. Allocate a new node with malloc
    //         2. Check that malloc didn't return NULL
    //         3. Copy the word into the node using strcpy
    //         4. Set node->next = NULL initially
    //         5. Add the node to the front OR end of the list
    //            (your choice – but be consistent!)

    // --- Your loop goes here ---

    // Print all words in the list
    printf("\nYour list:\n");
    print_list(head);

    // Free all memory
    free_list(head);

    return 0;
}

// TODO: Implement print_list.
// Walk through the list from head to tail and print each word.
// Expected format:  hello -> world -> data -> struct -> pointer -> NULL
void print_list(node *head)
{
    // TODO: Use a temporary pointer to traverse the list
    //       Do NOT move the head pointer itself!

    // Hint: while (tmp != NULL) { ... tmp = tmp->next; }
}

// TODO: Implement free_list.
// Walk through the list and free each node.
// Be careful: save node->next BEFORE calling free(node)!
void free_list(node *head)
{
    // TODO: Use two pointers – one for the current node,
    //       one to save the next node before freeing current.
}
