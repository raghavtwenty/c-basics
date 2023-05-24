/*
72. Program to sort the arrays in ascending and descending order by 
comparison method.
                        author @raghav
Date Created : 7 Jan 2022 | Last Updated : 7 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>


// Main
int main()
{
    printf("\nProgram To Sort The Arrays.\n\n") ;

    int arr[5], temp ;

    // User input
    for (int i = 0; i<5; i++)
    {
        printf("Enter The %d Element Of The Array : ", i) && scanf("%d", &arr[i]) ;
    }

    printf("\nAscending Order : ") ;
    // Ascending order sorting
    for (int i = 0; i<5; i++)
    {
        for (int j = 0; j<4; j++)
        {
            if (arr[i] < arr[j])  // next term greater than current term
            {
                temp = arr[i] ;     // Swapping process
                arr[i] = arr[j] ;
                arr[j] = temp ;
            }
        }
    }
    
    // Show after sorting in ascending
    for (int i = 0; i<5; i++)
    {
        printf("%d", arr[i]) ;
    }

    printf("\nDescending Order : ") ;
    
    // Descending order sorting
    // Show after reversing the ascending order
    for (int i = 4; i >= 0; i--)
    {
        printf("%d", arr[i]) ;
    }
    printf("\n") ;

    return 0 ;
}
