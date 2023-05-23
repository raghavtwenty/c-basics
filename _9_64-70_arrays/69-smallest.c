/*
69. Create an integer array with size 5 and then calculate the smaller 
element of that array using the function.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 4 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Functions 
int smallest(arre, min)
{
    if (arre < min)
    {
        min = arre ;
    }

    return min ;
}


// Main
int main( )
{
    printf ("\nSmallest Element In The Array.\n\n") ;
    
    int arr[5], min = 999999999 ;
    
    // Get input in looping
    for (int i = 0; i < 5; i++)
    {
        printf ("Enter The %d Element : ", i) && scanf ("%d", &arr[i]) ;
        min = smallest(arr[i], min) ;
    }

    printf ("\nMinimum Value Of The Array : %d\n", min) ;

    return 0 ;
}
