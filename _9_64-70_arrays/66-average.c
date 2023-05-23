/*
66. Program to find the average of n numbers using arrays
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 3 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Main
int main( )
{
    printf ("\nProgram To Find The Average Of N Numbers Using Arrays.\n\n") ;
    
    int arr[100], num, sum = 0 ;
    float avg ;

    printf ("How Many Elements : ") && scanf ("%d", &num) ;
    
    // Get input in looping
    for (int i = 0; i < num; i++)
    {
        printf ("Enter The %d Element : ", i) && scanf ("%d", &arr[i]) ;
        sum += arr[i] ;
    }

    // Average
    avg = sum/num ;
    printf("\nAverage Of The Array : %f\n", avg) ;

    return 0 ;
}
