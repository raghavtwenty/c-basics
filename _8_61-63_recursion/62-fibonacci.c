/*
Q62. Fibonacci series using recursion
                        author @raghav
Date Created : 31 Dec 2021 | Last Updated : 31 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>


// Functions
int fibonacci(int i)
{ 
    if(i == 0) 
    {
        return 0 ;
    }
    else if(i == 1) 
    {
        return 1 ;
    }
    else
    {
        return (fibonacci(i-1)+fibonacci(i-2)) ; 
    }
}


// Main
int main()
{
    printf("\nProgram To Print The Fibonacci Series Using Recursion.\n\n") ;

    int num, n ; 

    printf("Enter The Number: ") && scanf("%d", &num) ;
    printf("\nFibonacci Series: ") ;

    for (int i = 1; i<= num; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0 ;
}

