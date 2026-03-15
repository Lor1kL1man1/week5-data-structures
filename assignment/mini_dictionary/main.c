// main.c
// CS50x – Week 5 Assignment: Mini Dictionary
//
// Entry point for the Mini Dictionary program.
// DO NOT MODIFY THIS FILE.
//
// Compile: make main
// Run:     ./main
//
// This program:
//   1. Loads words from dictionary.txt into a hash table
//   2. Lets the user search for words in a loop
//   3. Frees all memory on exit

#include "dictionary.h"

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *filename = "dictionary.txt";

    // Load the dictionary
    printf("Loading dictionary from '%s'...\n", filename);
    if (!load(filename))
    {
        printf("Error: Could not load '%s'.\n", filename);
        printf("Make sure dictionary.txt is in the same folder as ./main\n");
        return 1;
    }
    printf("Dictionary loaded successfully!\n\n");

    // Interactive search loop
    while (true)
    {
        string query = get_string("Enter word (or 'quit' to exit, 'debug' to show table): ");

        // Exit condition
        if (strcmp(query, "quit") == 0)
        {
            break;
        }

        // Debug: print the full hash table
        if (strcmp(query, "debug") == 0)
        {
            print_table();
            continue;
        }

        // Search and report
        if (search(query))
        {
            printf("Found\n\n");
        }
        else
        {
            printf("Not Found\n\n");
        }
    }

    // Free all memory
    unload();
    printf("\nMemory freed. Goodbye!\n");

    return 0;
}
