/*
Write a menu driven program to do the following operations of a stack
1) push: inserting elements in a stack
2) pop: deleting elements in a stack
3) peek: displaying the top most element of a stack
4) display: display all the elements present in the stack
also keep an option to exit from the program
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int stack[100];
int N;
int top = -1;

void push(int token)
{
    char a;
    if (top == N - 1)
        printf("Stack Overflow Condition and hence no more elements cannot be entered\n");
    do
    {
        int token;
        printf("Enter the value to be inserted\n");
        scanf("%d", &token);
        top++;
        if (top >= N)
        {
            printf("Stack Overflow Condition and hence no more elements cannot be entered\n");
            top--;
            break;
        }

        else
        {
            stack[top] = token;
            printf("%d pushed into stack \n", token);
        }

        printf("Do you want to continue then enter Y to continue and N to discontinue\n");
        a = getch();
    } while (a == 'y' || a == 'Y');
    return;
}

int pop()
{
    int t;
    if (top == -1)
        printf("Stack Underflow condition hence no elements cannot be deleted\n");
    return stack[top--];
}

void peek()
{
    if (top == -1)
        printf("Stack Empty\n");
    else
        printf("The topmost element is %d", stack[top]);
    return;
}

void display()
{
    if (top == -1)
        printf("Stack Empty\n");
    else
    {
        printf("The stack is: \n");
        for (int i = top; i >= 0; i--)
            printf("%d\t", stack[i]);
    }
    return;
}

int main()
{

    int ch;
    printf("Enter the size of the stack\n");
    scanf("%d", &N);
    while (1)
    {
        printf("\nSelect your choice\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        scanf("%d", &ch);
        int token;
        int t;
        switch (ch)
        {
        case 1:
            push(token);
            break;
        case 2:
            t = pop();
            printf("%d poped from stack\n", t);
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(time(0));
        }
    }
    return 0;
}
/*
Enter the size of the stack
5

Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
1
Enter the value to be inserted
1
1 pushed into stack
Do you want to continue then enter Y to continue and N to discontinue
Enter the value to be inserted
2
2 pushed into stack
Do you want to continue then enter Y to continue and N to discontinue
Enter the value to be inserted
3
3 pushed into stack
Do you want to continue then enter Y to continue and N to discontinue
Enter the value to be inserted
4
4 pushed into stack
Do you want to continue then enter Y to continue and N to discontinue
Enter the value to be inserted
5
5 pushed into stack
Do you want to continue then enter Y to continue and N to discontinue
Enter the value to be inserted
6
Stack Overflow Condition and hence no more elements cannot be entered

Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
4
The stack is:
5       4       3       2       1
Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
2
5 poped from stack

Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
3
The topmost element is 4
Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
4
The stack is:
4       3       2       1
Select your choice
1.Push
2.Pop
3.Peek
4.Display
5.Exit
5
*/