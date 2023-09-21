/*
array = 5 3 1 4 2 

5 | 3 1 4 2
We will start checking with No 1 index 
Not zero index
if 3 is greater than 5 then break & stop
if 3 is smaller than 5 then swap between 5 & 3
now array will look 3 5 | 1 4 2

Then again Start checking with  2 index
if 1 is greater than 5 then break & stop
if 1 is smaller than 5 then swap between 5 and 1
array --> 3 1 | 5 4 2
continue this process of swapping till zero index
if 1 is grater than 3 then break & stop
if 1 is smaller than 3  then swap b/w 3 and 1
now we reached to zero index
Final Array --->  1 3 5 | 4 2

NOTE : Always The part of the array which left to '|' is SORTED
       Always  Right part is UNSORTED

*/



#include<stdio.h>

int main(){
    int n ;
    printf("Enter the Size of array ");
    scanf("%d" , &n );
    int arr[n];
    printf("Enter the elements of the array: ");

    for( int i = 0 ; i<n ; i++ ){
        scanf("%d" , &arr[i] );
    }

    for( int i = 1 ; i < n ; i++ ){
        int temp = arr[i];
        int ptr = i-1 ;
        while( temp < arr[ptr] && ptr >=1 ){
            arr[ptr + 1] = arr[ptr] ;
            ptr = ptr - 1 ;
        }
        arr[ptr + 1]=temp ; 
    }

    printf("\nYour Sorted Array is : ");
    for( int i = 0 ; i < n ; i++ ){
        printf("%d " , arr[i]);
    }
    
}
