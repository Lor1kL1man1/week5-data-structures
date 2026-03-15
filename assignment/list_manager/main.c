// main.c
// CS50x – Week 5 Assignment: List Manager
//
// Interactive program that lets the user manage a linked list.
// DO NOT MODIFY THIS FILE.
//
// Compile: make manager
// Run:     ./manager
// Check:   valgrind ./manager

#include "manager.h"

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    node *list = NULL;

    printf("=== Linked List Manager ===\n");
    printf("Commands: add <number> | print | free | quit\n\n");

    while (true)
    {
        string input = get_string("> ");

        // --- quit ---
        if (strcmp(input, "quit") == 0)
        {
            list = free_list(list);
            printf("Memory freed. Bye!\n");
            break;
        }

        // --- print ---
        else if (strcmp(input, "print") == 0)
        {
            print_list(list);
        }

        // --- free ---
        else if (strcmp(input, "free") == 0)
        {
            list = free_list(list);
            printf("List freed.\n");
        }

        // --- add <number> ---
        else if (strncmp(input, "add ", 4) == 0)
        {
            int n = atoi(input + 4); // parse number after "add "
            list = prepend(list, n);
            printf("Added %i to the front.\n", n);
        }

        // --- unknown command ---
        else
        {
            printf("Unknown command. Try: add <number> | print | free | quit\n");
        }
    }

    return 0;
}
