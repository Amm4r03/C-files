// testing stacks in C
// implementing a stack in an array

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int top = -1;
int inputArray[MAX_SIZE];

// basic operations
void push();        // inserts element to top of stack
void pop();         // removes the topmost element from the stack
void show();        // displays the topmost element of the stack

int main()
{
    int choice;

    while(1)
    {
        printf("Implementing Stack using Array");
        printf("\n1 : push the element\n2 : pop the element\n3 : show\n4 : quit");
        printf("\nenter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;
        
        case 4:
            exit(0);
        
        default:
            printf("invalid choice - try again");
            break;
        }
    }
}

void push()
{
    int entry;
    if (top == MAX_SIZE - 1)
    {
        printf("overflow");
        exit(0);
    }
    else
    {
        printf("\nEnter the element to be added to the stack : ");
        scanf("%d", &entry);
        top += 1;
        inputArray[top] = entry;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nunderflow");
        exit(0);
    }
    else
    {
        printf("popped element : %d", inputArray[top]);
        top = top - 1;
    }
}

void show()
{
    if(top == -1)
    {
        printf("\nunderflow");
        exit(0);
    }
    else
    {
        printf("members in stack : ");
        for (int i = top; i >= 0; i++)
        {
            printf("%d\n", inputArray[i]);
        }
    }
}