// dictionary.h
// CS50x – Week 5 Assignment: Mini Dictionary
//
// This header file defines the interface for the dictionary.
// DO NOT MODIFY THIS FILE.

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

// Maximum length for a word in the dictionary
#define MAX_WORD_LENGTH 50

// Number of buckets in the hash table (one per letter of the alphabet)
#define HASH_SIZE 26

// -------------------------------------------------------
// Node structure for the linked list chains in the hash table
// -------------------------------------------------------
typedef struct node
{
    char word[MAX_WORD_LENGTH];
    struct node *next;
}
node;

// -------------------------------------------------------
// The hash table: an array of pointers to linked list nodes
// Each bucket holds a chain of words that share the same hash
// -------------------------------------------------------
extern node *table[HASH_SIZE];

// -------------------------------------------------------
// Function declarations – implement these in dictionary.c
// -------------------------------------------------------

// Returns the hash index for a given word (0–25)
int hash_word(const char *word);

// Loads all words from the given file into the hash table
// Returns true on success, false on failure
bool load(const char *filename);

// Returns true if the word exists in the hash table, false otherwise
bool search(const char *word);

// Frees all memory used by the hash table
void unload(void);

// Prints a summary of the hash table (for debugging)
void print_table(void);

#endif // DICTIONARY_H
