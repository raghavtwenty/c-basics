/*
65. Program using array to take 10 values as input and display it.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 3 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Main
int main( )
{
    printf ("\nProgram Using Array To Take 10 Values As Input And Display It.\n\n") ;
    
    int arr[10] ;

    // Get input in looping
    for (int i = 0; i < 10; i++)
    {
        printf ("Enter The %d Element : ", i) && scanf ("%d", &arr[i]);
    }

    // Final show
    printf ("\nArray Contents.\n") ;
    for (int i = 0; i < 10; i++)
    {
        printf ("Element At %d Index : %d\n", i, arr[i]) ;
    }

    return 0 ;
}
