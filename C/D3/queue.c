/*
Write a menu driven program to do the following operations of a queue
1) insert: inserting elements in a queue
2) delete: deleting elements in a queue
3) display: display all the elements present in the queue
also keep an option to exit from the program
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int queue[5];
int N;
int front, rear = -1;
int item;

void insert(int item)
{
    char a;
    scanf("%d", &item);
    if (rear == 4)
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
            queue[rear] = item;
            printf("%d entered into queue\n", item);
        }
    }
}

void delete()
{
    if (rear == -1)
        printf("Queue Underflow\n");
    else
    {
        printf("\nDeleted : %d", queue[front]);
        front++;
        if (front == rear)
            front = rear = -1;
    }
}

void display()
{
    if (front == -1)
        printf("Queue Empty");
    else
    {
        printf("The Queue is \n");
        for (int i = front; i <= rear; i++)
            printf("%d\t", queue[i]);
        printf("\n");
    }
    return;
}

int main()
{

    int ch;
    N = 5;
    while (1)
    {
        printf("\nSelect your choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert(item);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(time(0));
        }
    }
    return 0;
}

/*
Select your choice
1.Insert
2.Delete
3.Display
4.Exit
1
23
23 entered into queue

Select your choice
1.Insert
2.Delete
3.Display
4.Exit
1
34
34 entered into queue

Select your choice
1.Insert
2.Delete
3.Display
4.Exit
2

Deleted : 23

Select your choice
1.Insert
2.Delete
3.Display
4.Exit
3

The Queue is
34

Select your choice
1.Insert
2.Delete
3.Display
4.Exit
4
*/