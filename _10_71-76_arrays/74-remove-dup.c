/*
74. Write a program in C to print all unique elements in an array.
                        author @raghav
Date Created : 7 Jan 2022 | Last Updated : 10 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>


// Main
int main()
{
    printf("\nProgram To Print Unique Elements In An Array.\n\n") ;

    int arr[5] ;

    // User input
    for (int i = 0; i<5; i++)
    {
        printf("Enter The %d Element Of The Array : ", i) && scanf("%d", &arr[i]) ;
    }

    printf("\nUnique Elements : ") ;

    // Iteration for removing duplicates
    for (int i = 0; i<5; i++)
    {
        int count = 0 ;
        for (int j = i+1; j<5; j++)     
        {
            if (arr[i] == arr[j])   // ith Iterator == jth term in the array
            {
                count += 1 ;
                break ;
            }
        }

        if (count == 0)
        {
            printf("%d, ", arr[i]) ;
        }
    }
    printf("\n") ;

    return 0 ;
}
