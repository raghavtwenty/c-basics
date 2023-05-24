/*
73. Write a program in C to count a total number of duplicate elements in an array. 
                        author @raghav
Date Created : 7 Jan 2022 | Last Updated : 10 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>

// Main
int main()
{
    printf("\nProgram To Count Duplicates.\n\n") ;

    int arr[5], count = 0 ;

    // User input
    for (int i = 0; i<5; i++)
    {
        printf("Enter The %d Element Of The Array : ", i) && scanf("%d", &arr[i]) ;
    }

    // Iteration for counting duplicates
    for (int i = 0; i<5; i++)
    {
        for (int j = i+1; j<5; j++)    
        {
            if (arr[i] == arr[j]) // ith Iterator == jth term in the array
            {
                count += 1 ;
                break ;
            }
        }
    }

    printf("\nCount Of Duplicates : %d\n", count) ;

    return 0 ;
}