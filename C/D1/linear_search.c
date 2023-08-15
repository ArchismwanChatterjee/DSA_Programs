// WAP to implement linear search

#include <stdio.h>
int arr[100], N;
int linear_search(int val)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == val)
        {
            return i + 1;
        }
    }
    return 0;
}
int main()
{

    int arr[100];
    int val, c = 0;
    printf("Enter the total number of elements");
    scanf("%d", &N);
    printf("Enter the elements\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &arr[i]);
    printf("\n Enter the value to be searched\n");
    scanf("%d", &val);

    printf("Element found in %d th position", linear_search(val));
    return 0;
}

/*
Enter the total number of elements 5
Enter the elements
10
20
30
40
50

Enter the value to be searched
40

Element found in 4th position
*/