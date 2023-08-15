// WAP to implement binary search

#include <stdio.h>

int binarySearch(int a[100], int lb, int ub, int x)
{
    while (lb <= ub)
    {
        int m = (lb + ub) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            lb = m + 1;
        else
            ub = m - 1;
    }
    return 0;
}
void bubbleSort(int a[100], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i = i + 1)
    {
        for (j = 0; j < n - 1 - i; j = j + 1)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int val;
    int a[100];
    int length;
    printf("Enter the size of the array: ");
    scanf("%d", &length);
    printf("Enter the elements of the array\n");
    for (int i = 0; i < length; i++)
        scanf("%d", &a[i]);
    printf("Enter the value you want to search in the array\n");
    scanf("%d", &val);
    bubbleSort(a, length);
    printf("The SOrted Array is \n");
    for (int i = 0; i < length; i++)
        printf("%d\t", a[i]);
    int result = binarySearch(a, 0, length - 1, val);
    (result == 0) ? printf("\n Element not found") : printf("\n Element found at position: %d", (result + 1));
}

/*

Enter the size of the array: 5
Enter the elements of the array
1
23
2
10
86
Enter the value you want to search in the array
23
The SOrted Array is
1       2       10      23      86
Element found at position: 4

*/