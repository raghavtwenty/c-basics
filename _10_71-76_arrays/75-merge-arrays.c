/*
75. Write a program in C to merge two arrays of same size sorted in descending order.
                        author @raghav
Date Created : 10 Jan 2022 | Last Updated : 10 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>


// Main
int main()
{
    printf("\nProgram To Sort The Arrays.\n\n") ;

    int arr1[5], arr2[5], arr3[10], temp ;

    // User input 1st array
    for (int i = 0; i<5; i++)
    {
        printf("Enter The %d Element Of The 1st Array : ", i) && scanf("%d", &arr1[i]) ;
        arr3[i] = arr1[i] ;
    }

    // 2nd Array
    for (int i = 0; i<5; i++)
    {
        printf("Enter The %d Element Of The 2nd Array : ", i) && scanf("%d", &arr2[i]) ;
        arr3[5+i] = arr2[i] ;
    }

    // Show 3rd array
    printf("\nElements Of The Merged Array : ") ;
    for (int i = 0; i<10; i++)
    {
        printf("%d, ", arr3[i]) ;
    }

    // Descending order sorting
    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<10; j++)
        {
            if (arr3[i] > arr3[j])  // next term greater than current term
            {
                temp = arr3[i] ;     // Swapping process
                arr3[i] = arr3[j] ;
                arr3[j] = temp ;
            }
        }
    }
    
    // Final Show
    // Merged array after sorting in descending order
    printf("\nElements Of The Merged Array After Sorting In The Descending Order : ") ;
    for (int i = 0; i<10; i++)
    {
        printf("%d, ", arr3[i]) ;
    }
    printf("\n") ;

    return 0 ;
}

