// list_solution.c
// CS50x – Week 5 | SOLUTION – Exercise 2: Linked List
//
// FOR INSTRUCTOR USE ONLY.
// Students should not view this until after completing the exercise.

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char word[50];
    struct node *next;
}
node;

void print_list(node *head);
void free_list(node *head);

int main(void)
{
    node *head = NULL;
    node *tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        // Prompt for word
        char prompt[20];
        sprintf(prompt, "Enter word %i: ", i + 1);
        string w = get_string(prompt);

        // Allocate a new node
        node *new_node = malloc(sizeof(node));
        if (new_node == NULL)
        {
            printf("Memory allocation failed.\n");
            free_list(head);
            return 1;
        }

        // Populate the node
        strcpy(new_node->word, w);
        new_node->next = NULL;

        // Append to end of list
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
    }

    printf("\nYour list:\n");
    print_list(head);

    free_list(head);
    return 0;
}

void print_list(node *head)
{
    node *tmp = head;
    while (tmp != NULL)
    {
        printf("%s", tmp->word);
        if (tmp->next != NULL)
        {
            printf(" -> ");
        }
        tmp = tmp->next;
    }
    printf(" -> NULL\n");
}

void free_list(node *head)
{
    node *tmp;
    while (head != NULL)
    {
        tmp = head->next; // Save next before freeing
        free(head);
        head = tmp;
    }
}
