/*
70. Program to reverse an array elements in an array.
                        author @raghav
Date Created : 3 Jan 2022 | Last Updated : 3 Jan 2022
*/


// Importing required libraries
#include <stdio.h>
#include <string.h>


// Main
int main( )
{
    printf ("\nReverse The Array.\n\n") ;
    
    int arr[100], arrev[100], num, temp, i, j ;

    printf ("How Many Elements : ") && scanf ("%d", &num) ;
    
    // Get input in looping
    for (i = 0; i < num; i++)
    {
        printf ("Enter The %d Element : ", i) && scanf ("%d", &arr[i]) ;
    }
    
    j =  i - 1 ;    // j will Point to last Element
    i = 0 ;     // i will be pointing to first element
    while (i < j) 
    {
        temp = arr[i] ;  
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i ++ ; 
        j -- ; 
    }

    printf ("\nAfter Reversing The Array : ") ;
    for (i = 0; i < num; i++) 
    {
        printf ("%d ,", arr[i]) ; 
    }
    printf ("\n") ;

    return 0 ;
}
