/*
Q61. Factorial using recursion
                        author @raghav
Date Created : 31 Dec 2021 | Last Updated : 31 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>


// Functions
int factorial(num)
{
    if (num == 0)
    {
        return 1 ;
    }
    return num * factorial(num - 1);
}


// Main
int main()
{
    printf("\nProgram To Find Factorial Using Recursion.\n\n") ;

    int num ;

    printf("Enter The Number: ") && scanf("%d", &num) ;
    printf("\nFactorial Of %d Is : %d\n", num, factorial(num)) ;

    return 0 ;
}


