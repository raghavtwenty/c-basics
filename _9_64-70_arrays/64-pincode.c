/*
64. Program to get 6 values of pincode in array and display that as output.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 3 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Main
int main( )
{
    printf ("\nProgram To Get Pincode From The User And Display The Same.\n\n") ;

    int arr[6] ;

    // Get input in looping
    for (int i = 0; i < 6; i++)
    {
        printf ("Enter The %d Element Of The Pincode : ", i) && scanf("%d", &arr[i]);
    }

    // Final show
    printf ("\nPincode : ") ;
    for (int i = 0; i < 6; i++)
    {
        printf ("%d", arr[i]) ;
    }
    printf ("\n") ;

    return 0 ;
}    
