// currently not working

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* link;      // pointer to a struct node  
};

// to insert a node in the linked list
// to traverse the linked list


void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->link;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* current = head;
    struct Node* next;

    while (current != NULL) {
        next = current->link;
        free(current);
        current = next;
    }
}   

int main()
{
    struct Node* head;      // declared head
    head = NULL;

    struct Node* temp =  (struct Node*) malloc(sizeof(struct Node*));
    // malloc returns void pointer to the address of memory block assigned
    // we use type casting to turn it to a node pointer value address and assign that value to 'temp' node
    // we have thus created a node in the list

    temp -> data = 2;       // same as writing (*node).data = 2; (dereferences temp pointer and assigns value 2 to the data attribute)
    temp -> link = NULL;

    head = temp;

    temp = (struct Node*) malloc(sizeof(struct Node*));
    temp->data=4;
    temp->link=NULL;

    struct Node* trav = head;
    while (trav->link != NULL)
    {
        printf("%d", trav->data);
        trav = trav->link;
    }

    printList(head);

    freeList(head);
    
    free(temp);

    return 0;
}
