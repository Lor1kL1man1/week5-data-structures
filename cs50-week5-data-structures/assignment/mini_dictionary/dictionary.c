// dictionary.c
// CS50x – Week 5 Assignment: Mini Dictionary
//
// TODO: Implement all four functions declared in dictionary.h
//
// Functions to implement:
//   - hash_word()   Convert a word to a bucket index (0–25)
//   - load()        Read words from file into the hash table
//   - search()      Look up a word in the hash table
//   - unload()      Free all allocated memory
//   - print_table() Print the contents of the table (debugging aid)

#include "dictionary.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// The hash table – an array of 26 linked list heads, one per letter
// All entries start as NULL (empty buckets)
node *table[HASH_SIZE];

// -------------------------------------------------------
// hash_word
// -------------------------------------------------------
// TODO: Implement this function.
//
// Given a word, return an index between 0 and HASH_SIZE-1 (0–25).
// Map the first character of the word to an index:
//   'a' or 'A' -> 0
//   'b' or 'B' -> 1
//   ...
//   'z' or 'Z' -> 25
//
// This is the same logic as Exercise 1!
int hash_word(const char *word)
{
    // TODO: Return tolower(word[0]) - 'a'
    return 0; // Replace this line
}

// -------------------------------------------------------
// load
// -------------------------------------------------------
// TODO: Implement this function.
//
// Open the file at `filename`, read each word line by line,
// and insert it into the correct bucket in `table[]`.
//
// Steps:
//   1. Open the file with fopen() – check for NULL!
//   2. Loop: read each word with fscanf(file, "%49s", word)
//      (fscanf returns EOF when the file ends)
//   3. For each word:
//      a. Allocate a new node with malloc
//      b. Copy the word into node->word using strcpy
//      c. Compute the bucket index using hash_word()
//      d. Insert the node at the FRONT of that bucket's list
//         (set node->next = table[index], then table[index] = node)
//   4. Close the file with fclose()
//   5. Return true on success
bool load(const char *filename)
{
    // TODO: Implement load
    //
    // Hint for inserting at the front of a linked list:
    //   new_node->next = table[index];
    //   table[index] = new_node;

    return false; // Replace this line
}

// -------------------------------------------------------
// search
// -------------------------------------------------------
// TODO: Implement this function.
//
// Return true if `word` is in the hash table, false otherwise.
//
// Steps:
//   1. Compute the bucket index using hash_word()
//   2. Traverse the linked list at table[index]
//   3. Use strcasecmp() to compare (handles uppercase input!)
//   4. Return true if a match is found, false if the list ends
bool search(const char *word)
{
    // TODO: Implement search
    //
    // Hint: strcasecmp(a, b) returns 0 if strings match (case-insensitive)
    //       It's in <strings.h> – already included via dictionary.h

    return false; // Replace this line
}

// -------------------------------------------------------
// unload
// -------------------------------------------------------
// TODO: Implement this function.
//
// Free ALL memory allocated by load().
// Loop through every bucket in table[], then free each
// node in that bucket's linked list.
//
// Remember: save the next pointer BEFORE freeing the current node!
void unload(void)
{
    // TODO: For each bucket i from 0 to HASH_SIZE-1:
    //         node *cursor = table[i];
    //         while (cursor != NULL) { ... }
}

// -------------------------------------------------------
// print_table  (debugging helper – already implemented)
// -------------------------------------------------------
// Prints each bucket and its contents. Useful for testing load().
// Call this from main.c by typing "debug" at the search prompt.
void print_table(void)
{
    printf("\n--- Hash Table Contents ---\n");
    for (int i = 0; i < HASH_SIZE; i++)
    {
        printf("Bucket %2d (%c): ", i, 'a' + i);
        node *cursor = table[i];
        if (cursor == NULL)
        {
            printf("(empty)");
        }
        while (cursor != NULL)
        {
            printf("%s", cursor->word);
            if (cursor->next != NULL)
            {
                printf(" -> ");
            }
            cursor = cursor->next;
        }
        printf("\n");
    }
    printf("---------------------------\n\n");
}
