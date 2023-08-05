// Write a C program to implement linear search algorithm
#include <stdio.h>
int main()
{
    int size, x;
    printf("Enter array Size:");
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array element you want to add: ");
        scanf("%d", &array[i]);
    }
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    for (int i = 0; i < size; i++)
    {
        if (array[i] == x)
        {
            printf("%d is found at %d position in the array", x, i + 1);
            return 0;
        }
    }
    printf("Element not present in the array");
    return 0;
}
/*Enter array Size:5
Enter the array element you want to add: 2
Enter the array element you want to add: 4
Enter the array element you want to add: 6
Enter the array element you want to add: 88
Enter the array element you want to add: 9
Enter the element you want to search: 6
6 is found at 3 position in the array*/
