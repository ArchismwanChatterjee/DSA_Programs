// Q2) Stack Implementation Using Array

#include <stdio.h>
#include <stdlib.h>

#define MAX 50 // Maximum number of elements that can be stored

int top = -1, stack[MAX];
void push();
void pop();
void display();

void main()
{
    int choice;

    while (1)
    {
        puts("Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                push();
                display();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);

            default:
                printf("\nWrong Choice.\n");
        }
    }
}

void push()
{
    int val;

    if (top == MAX - 1)
    {
        printf("\nStack is full. ");
    }
    else
    {
        printf("\nEnter element to push: ");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nStack is Empty.");
    }
    else
    {
        printf("\nDeleted element is %d", stack[top]);
        top = top - 1;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is Empty.");
    }
    else
    {
        printf("\nStack is : \n");
        for (i = top; i >= 0; --i)
        {
            printf("%d\n", stack[i]);
        }
    }
}
/*
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
1

Enter element to push: 1

Stack is : 
1
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
1

Enter element to push: 2

Stack is : 
2
1
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
1

Enter element to push: 3

Stack is : 
3
2
1
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
2

Deleted element is 3
Stack is : 
2
1
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
2

Deleted element is 2
Stack is : 
1
Stack Menu: Choose an Operation 1.Push, 2.Pop, 3.Display, 4.Exit
4
*/