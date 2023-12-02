// implementing linked lists in C

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Node
{
    int data;          // stores data of the node
    struct Node *next; // pointer to a another Node structure (named next)
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 12;
    third->next = NULL;

    free(head);
    free(second);
    free(third);

    return 0;
}