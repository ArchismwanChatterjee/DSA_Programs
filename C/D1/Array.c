/*
Write a menu driven program for array insertion,deletion,display and exit
  1) Insertion : Insert an new element in the array at any index where the index is given by user
  2) Deletion : Delete an element from the array at any index given by the user
  3) Display : Print all elements of the array
  4) Exit : Exit from the program
*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

int a[100];
int N;
int insert(int val, int pos)
{
  for (int i = N - 1; i >= pos; i--)
    a[i + 1] = a[i];
  a[pos] = val;
  N++;
  return 0;
}

int delete(int del)
{
  for (int i = del - 1; i < N - 1; i++)
    a[i] = a[i + 1];

  return 0;
}

int display()
{
  printf("\nThe Array is \n");
  for (int i = 0; i < N; i++)
    printf("%d\t", a[i]);
  return 0;
}
int main()
{

  printf("\nEnter the size of the array\n");
  scanf("%d", &N);
  printf("Enter the elements of the array\n");
  for (int i = 0; i < N; i++)
    scanf("%d", &a[i]);
  while (1)
  {
    int ch, val, pos, del;
    printf("SELECT YOUR CHOICE\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      val, pos;
      printf("Enter the index position where you want to insert\n");
      scanf("%d", &pos);
      printf("Enter the value you want to insert\n");
      scanf("%d", &val);
      insert(val, pos);
      break;
    case 2:
      del;
      printf("Enter the position where you want to delete the element\n");
      scanf("%d", &del);
      delete (del);
      break;
    case 3:
      display();
      break;
    case 4:
      exit(time(0));
      break;
    }
  }
  return 0;
}
/*
Enter the size of the array
5
Enter the elements of the array
1
2
3
4
5
SELECT YOUR CHOICE
1.Insertion
2.Deletion
3.Display
4.Exit
1
Enter the index position where you want to insert
2
Enter the value you want to insert
8
SELECT YOUR CHOICE
1.Insertion
2.Deletion
3.Display
4.Exit
3

The Array is
1       2       8       3       4       5
SELECT YOUR CHOICE
1.Insertion
2.Deletion
3.Display
4.Exit

4

*/