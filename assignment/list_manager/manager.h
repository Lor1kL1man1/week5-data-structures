// manager.h
// CS50x – Week 5 Assignment: List Manager
//
// Header file for the linked list manager.
// DO NOT MODIFY THIS FILE.

#ifndef MANAGER_H
#define MANAGER_H

// -------------------------------------------------------
// Node – stores one integer and a pointer to the next node
// -------------------------------------------------------
typedef struct node
{
    int number;
    struct node *next;
}
node;

// -------------------------------------------------------
// Function declarations – implement these in manager.c
// -------------------------------------------------------

// Prepends a new number to the front of the list.
// Returns the new head of the list.
node *prepend(node *list, int number);

// Prints all numbers in the list, one per line.
// Prints "(empty)" if the list is NULL.
void print_list(node *list);

// Frees all nodes in the list.
// Returns NULL so the caller can reset their pointer.
node *free_list(node *list);

#endif // MANAGER_H
