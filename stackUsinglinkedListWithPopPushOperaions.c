#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} *top = NULL;

void push(int value)
{
    struct node *newNode = NULL;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Stack is overload");
        exit(0);
    }
    else
    {
        newNode->data = value;
        newNode->link = NULL;

        newNode->link = top;
        top = newNode;
    }
}

void pop()
{
    struct node *toPop = NULL;

    if (toPop = NULL)
    {
        printf("Stack is underflow");
    }
    else
    {
        toPop = top;
        top = top->link;
        free(toPop);
    }
}

void display()
{
    struct node *temp = NULL;
    temp = top;

    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
}

int main()
{
    int operation_number = 0;
    int value = 0;
    while (1)
    {
        printf("\nEnter Operation below,\n- Press 1 to push element\n- Press 2 to pop the element\n- Press 3 to print the elements\n- Press 4 to exit\n- Enter the Choise : ");
        scanf("%d", &operation_number);

        switch (operation_number)
        {
        case 1:
        {
            printf("Enter the value : ");
            scanf("%d", &value);
            push(value);
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            exit(0);
        }

        default:
        {
            printf("Invalid Choice!");
        }
        }
    }
    return 0;
}
