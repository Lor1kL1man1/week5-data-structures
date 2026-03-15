// list1.c
// CS50x – Week 5 | Exercise 1: Dynamic Array
//
// Implements a list of numbers with an array of dynamic size.
// Study how the array is grown from size 3 to size 4 using malloc.
//
// Compile: make list1
// Run:     ./list1

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // List of size 3
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    // Initialize list of size 3 with numbers
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // List of size 4
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    // TODO: Copy all 3 values from list[] into tmp[]
    // Use a for loop that goes from i = 0 to i < 3
    for (int i = 0; i < 3; i++)
    {
        // TODO: tmp[i] = ???
    }

    // Add a 4th number to the new list
    tmp[3] = 4;

    // Free the old list of size 3 (we no longer need it)
    free(list);

    // Make list point to the new, larger array
    list = tmp;

    // TODO: Print all 4 numbers using a for loop
    // Expected output:
    //   1
    //   2
    //   3
    //   4
    for (int i = 0; i < 4; i++)
    {
        // TODO: printf(...)
    }

    // Free the final list
    free(list);
    return 0;
}
