// hash.c
// CS50x – Week 5 Exercise 1: Hash Function
//
// TODO: Implement a hash function that converts the first
//       letter of a word into a number between 0 and 25.
//
// Compile: make hash
// Run:     ./hash

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Function prototype
int hash(string word);

int main(void)
{
    // Get a word from the user
    string word = get_string("Word: ");

    // Compute and display the hash index
    int index = hash(word);
    printf("Hash index: %i\n", index);

    return 0;
}

// TODO: Implement this function.
// It should return a number from 0 (for 'a') to 25 (for 'z'),
// based on the first letter of the word.
// It should work for both uppercase and lowercase input.
int hash(string word)
{
    // TODO: Handle the edge case where the word is empty
    //       (what should you return if strlen(word) == 0?)

    // TODO: Get the first character of the word

    // TODO: Convert it to lowercase using tolower()

    // TODO: Return a number between 0 and 25
    //       Hint: 'a' has ASCII value 97

    return 0; // Replace this line with your implementation
}
