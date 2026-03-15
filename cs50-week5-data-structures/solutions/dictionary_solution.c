// dictionary_solution.c
// CS50x – Week 5 | SOLUTION – Assignment: Mini Dictionary
//
// FOR INSTRUCTOR USE ONLY.
// Students should not view this until after completing the assignment.
//
// This file is a self-contained solution combining dictionary.h,
// dictionary.c, and main.c for easy review.

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdbool.h>

// ---- Constants ----
#define MAX_WORD_LENGTH 50
#define HASH_SIZE 26

// ---- Data structures ----
typedef struct node
{
    char word[MAX_WORD_LENGTH];
    struct node *next;
}
node;

node *table[HASH_SIZE];

// ---- Function declarations ----
int   hash_word(const char *word);
bool  load(const char *filename);
bool  search(const char *word);
void  unload(void);
void  print_table(void);

// ---- hash_word ----
int hash_word(const char *word)
{
    return tolower((unsigned char)word[0]) - 'a';
}

// ---- load ----
bool load(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return false;
    }

    char word[MAX_WORD_LENGTH];
    while (fscanf(file, "%49s", word) != EOF)
    {
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            fclose(file);
            return false;
        }

        strcpy(new_node->word, word);

        int index = hash_word(word);
        new_node->next = table[index]; // Insert at front of list
        table[index] = new_node;
    }

    fclose(file);
    return true;
}

// ---- search ----
bool search(const char *word)
{
    int index = hash_word(word);
    node *cursor = table[index];

    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        cursor = cursor->next;
    }
    return false;
}

// ---- unload ----
void unload(void)
{
    for (int i = 0; i < HASH_SIZE; i++)
    {
        node *cursor = table[i];
        while (cursor != NULL)
        {
            node *tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }
        table[i] = NULL;
    }
}

// ---- print_table ----
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

// ---- main ----
int main(void)
{
    const char *filename = "dictionary.txt";

    printf("Loading dictionary from '%s'...\n", filename);
    if (!load(filename))
    {
        printf("Error: Could not load '%s'.\n", filename);
        return 1;
    }
    printf("Dictionary loaded successfully!\n\n");

    while (true)
    {
        string query = get_string("Enter word (or 'quit' / 'debug'): ");

        if (strcmp(query, "quit") == 0)
        {
            break;
        }
        if (strcmp(query, "debug") == 0)
        {
            print_table();
            continue;
        }

        printf("%s\n\n", search(query) ? "Found" : "Not Found");
    }

    unload();
    printf("\nMemory freed. Goodbye!\n");
    return 0;
}
