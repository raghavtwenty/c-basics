/*
71. Write a program to input ten numbers through the keyboard. Compute & display 
addition of even numbers and product of odd numbers.
                        author @raghav
Date Created : 7 Jan 2022 | Last Updated : 7 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>

// Main
int main()
{
    printf("\nProgram To Add Even Numbers & Multiply Odd Numbers.\n\n") ;

    int arr[10], sum = 0, multi = 1;

    for (int i = 1; i<=10; i++)
    {
        printf("Enter The %d Element Of The Array : ", i) && scanf("%d", &arr[i]) ;
        if (i%2 == 0)
        {
            sum += arr[i] ;
        }
        else if (i%2 == 1)
        {
            multi *= arr[i] ;
        }
    }

    printf("\nSum : %d\nMultiplication: %d\n", sum, multi) ;
    
    return 0 ;
}


