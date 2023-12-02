#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;      // global variable


void insertNode(int x)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));
    temp->data = x;
    temp->next = head;
    head = temp;        // insertion of node into the head
}


void printList()
{
    struct Node* temp = head;
    printf("current list :\n");
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;        // empty list
    printf("how many numbers to be entered in the list : ");
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter the number : ");
        scanf("%d", &x);
        insertNode(x);
        printList();
    }
    

    return 0;
}