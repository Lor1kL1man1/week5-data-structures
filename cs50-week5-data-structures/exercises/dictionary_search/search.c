// search.c
// CS50x – Week 5 Exercise 3: Dictionary Search
//
// TODO: Search an array of 10 words for a user-entered word.
//       Print "Found!" or "Not found."
//
// Compile: make search
// Run:     ./search

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Number of words in our mini dictionary
#define DICT_SIZE 10

int main(void)
{
    // A hardcoded list of 10 words – do not modify
    char *words[DICT_SIZE] = {
        "apple", "banana", "computer", "science",
        "hash", "table", "memory", "pointer", "program", "code"
    };

    // Get a word from the user
    string query = get_string("Enter a word to search: ");

    // TODO: Search the words[] array for the query.
    //
    // Requirements:
    //   - Use a for loop to check each element
    //   - Use strcmp() to compare strings (NOT ==)
    //     strcmp(a, b) returns 0 when a and b are equal
    //   - If found, print "Found!" and stop searching
    //   - If the loop finishes without a match, print "Not found."
    //
    // Hint: A boolean flag variable can be useful here.
    //       bool found = false;   (remember to #include <stdbool.h>)

    // --- Your search logic goes here ---

    return 0;
}
