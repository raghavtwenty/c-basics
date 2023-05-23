/*
68. Create an integer array with size 5 and then calculate the large element 
of that array using the function.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 4 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Functions
int largest(arr, max)
{
    if (arr > max)
    {
        max = arr ;
    }

    return max ;
}


// Main
int main( )
{
    printf ("\nLargest Element In The Array\n\n") ;
    
    int arr[5], max = 0 ;

    // Get input in looping
    for (int i = 0; i < 5; i++)
    {
        printf ("Enter The %d Element : ", i) && scanf ("%d", &arr[i]) ;
        max = largest(arr[i], max) ;
    }

    printf ("\nMaximum Value Of The Array : %d\n", max) ;

    return 0 ;
}
