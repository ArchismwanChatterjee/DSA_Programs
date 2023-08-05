/*
Write a menu driven program for array insertion,deletion,display and exit
  1) Insertion : Insert an new element in the array at any index where the index is given by user
  2) Deletion : Delete an element from the array at any index given by the user
  3) Display : Print all elements of the array
  4) Exit : Exit from the program
  */

#include <stdio.h>

void display(int *array, int size)
{
  printf("Array elements: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertElement(int *array, int *size, int index, int element)
{
  if (*size >= 100)
  {
    printf("Array is full. Cannot insert more elements.\n");
  }
  else
  {
    if (index < 0 || index > *size)
    {
      printf("Invalid index. Please enter a valid index.\n");
    }
    else
    {
      for (int i = *size - 1; i >= index; i--)
      {
        array[i + 1] = array[i];
      }
      array[index] = element;
      (*size)++;
    }
  }
}

void deleteElement(int *array, int *size, int index)
{
  if (*size == 0)
  {
    printf("Array is empty. Cannot delete elements.\n");
  }
  else
  {
    if (index < 0 || index >= *size)
    {
      printf("Invalid index. Please enter a valid index.\n");
    }
    else
    {
      for (int i = index; i < *size - 1; i++)
      {
        array[i] = array[i + 1];
      }
      (*size)--;
    }
  }
}

int main()
{
  int choice, index, element, size;
  printf("Enter array Size: ");
  scanf("%d", &size);
  int array[100];
  for (int i = 0; i < size; i++)
  {
    printf("Enter the array element you want to add: ");
    scanf("%d", &array[i]);
  }

  while (1)
  {
    printf("\nMenu\n");
    printf("1) Insertion\n");
    printf("2) Deletion\n");
    printf("3) Display\n");
    printf("4) Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter the index where you want to insert the element: ");
      scanf("%d", &index);
      printf("Enter the element you want to insert: ");
      scanf("%d", &element);
      insertElement(array, &size, index, element);
      display(array, size);
      break;
    case 2:
      printf("Enter the index of the element you want to delete: ");
      scanf("%d", &index);
      deleteElement(array, &size, index);
      display(array, size);
      break;
    case 3:
      display(array, size);
      break;
    case 4:
      printf("Exiting the program.\n");
      return 0;
    default:
      printf("Invalid choice. Please enter a valid option.\n");
    }
  }

  return 0;
}
/*Enter array Size: 5
Enter the array element you want to add: 1
Enter the array element you want to add: 2
Enter the array element you want to add: 4
Enter the array element you want to add: 6
Enter the array element you want to add: 4

Menu
1) Insertion
2) Deletion
3) Display
4) Exit
Enter your choice: 1
Enter the index where you want to insert the element: 4
Enter the element you want to insert: 69
Array elements: 1 2 4 6 69 4

Menu
1) Insertion
2) Deletion
3) Display
4) Exit
Enter your choice: 1
Enter the index where you want to insert the element: 4
Enter the element you want to insert: 22
Array elements: 1 2 4 6 22 69 4

Menu
1) Insertion
2) Deletion
3) Display
4) Exit
Enter your choice: 2
Enter the index of the element you want to delete: 2
Array elements: 1 2 6 22 69 4

Menu
1) Insertion
2) Deletion
3) Display
4) Exit
Enter your choice: 4
Exiting the program.*/