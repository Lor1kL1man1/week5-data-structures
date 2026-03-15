// hash_solution.c
// CS50x – Week 5 | SOLUTION – Exercise 1: Hash Function
//
// FOR INSTRUCTOR USE ONLY.
// Students should not view this until after completing the exercise.

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int hash(string word);

int main(void)
{
    string word = get_string("Word: ");
    int index = hash(word);
    printf("Hash index: %i\n", index);
    return 0;
}

int hash(string word)
{
    // Handle empty string edge case
    if (strlen(word) == 0)
    {
        return 0;
    }

    // Convert first letter to lowercase and map to 0–25
    return tolower(word[0]) - 'a';
}
