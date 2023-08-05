// Write a C program to implement binary search algorithm
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
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
        if (array[mid] < x)
            low = mid + 1;
        else if (array[mid] == x)
        {
            printf("%d found at location %d.n", x, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list.n", x);
}
/*Enter array Size:5
Enter the array element you want to add: 10
Enter the array element you want to add: 20
Enter the array element you want to add: 30
Enter the array element you want to add: 40
Enter the array element you want to add: 50
Enter the element you want to search: 30
30 found at 3 position*/