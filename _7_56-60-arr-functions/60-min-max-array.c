/*
60. Program to find the minimum and the maximum element in the array.
                        author @raghav
Date Created : 28 Dec 2021 | Last Updated : 28 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 
#include <string.h> 


// Main
int main()
{
    printf("\nProgram To Find The Maximum And The Minimum Element In The Array.\n\n") ;

    int arr[20], max = 0, mini = 99999999, n, i ;

    printf("Enter The Number Of Values To Store: ") && scanf("%d", &n) ;
    for(i=0; i<n; i++) // Inserting Values Into The Array.
    {
        printf("Enter The Value Of %d: ", i) && scanf("%d", &arr[i]) ;
    }

    for(i=0; i<n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i] ;
        }
        else if (arr[i] < mini)
        {
            mini = arr[i] ;
        }
        else
        {
            continue ;
        }
    }

    printf("\nMaximum Element : %d\n", max) ;
    printf("Minimum Element : %d\n", mini) ;

    return 0 ;
}