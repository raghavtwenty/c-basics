/*
insertion sort
                        author @raghav
Date Created : 5 March 2022 | Last Updated : 5 March 2022
*/


// Importing required libraries
#include <stdio.h>


void printArray(int* A, int n)
{ 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]) ; 
    }
        printf("\n") ; 
}

void insertionSort(int *A, int n)
{ 
    int key, j ;
    for (int i = 1; i <= n-1; i++) 
    {
        key = A[i] ;
        j = i-1 ;
        // Loop for each pass 
        while (j>=0 && A[j] > key)
        {
            A[j+1] = A[j] ;
            j-- ; 
        }
        A[j+1] = key ; 
    }
}


// Main
int main()
{
    int A[] = {1, 29, 0, -45, -23, -9} ; 
    int n = 6 ;
    printArray(A, n) ; 
    insertionSort(A, n) ;
    printf("after insertion sort\n") ; 
    printArray(A, n) ;
    return 0 ;
}