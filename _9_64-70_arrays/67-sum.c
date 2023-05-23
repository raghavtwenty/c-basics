/*
67. Program using 2D array to find the sum of matrix.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 4 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Initialization 
int arr1[2][2], arr2[2][2], arr[2][2], resultadd[2][2], sum = 0 ;


// Main
int main( )
{
    printf ("\nProgram Using 2D Array To Find The Sum Of Matrix.\n\n") ;
    
    printf("\nMatrix 1.\n"); 
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++) 
        {
            //getting elements of 1st matrix 
            printf ("Enter Arr1 (%d%d): ", i+1, j+1) && scanf ("%d",&arr1[i][j]) ;
        }
    }

    printf("\nMatrix 2.\n"); 
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++) 
        {
        //getting elements of 2nd matrix 
        printf("Enter Arr2 (%d%d): ", i+1, j+1) && scanf ("%d", &arr2[i][j]) ;
        }
    }

    printf("\nAfter Adding Two Matrices.\n\n") ;

    // Addition of 2D matrices
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            resultadd[i][j] = arr1[i][j] + arr2[i][j] ;
        }
    }

    // Final show of cumulated matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", resultadd[i][j]) ;
        }
    }

    return 0 ;
}
