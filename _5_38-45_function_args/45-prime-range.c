/*
Q45) Program to find prime numbers in given range using functions
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021
*/


// Importing Required Libraries 
#include <math.h> 
#include <stdio.h>

// Main
int main() 
{
    printf("\nSet Of Prime Numbers In Between A Range.\n\n") ;

    int a, b, i, j, g ;

    printf("Enter Lower Bound Of The Interval: ") && scanf("%d", &a) ; 
    printf("Enter Upper Bound Of The Interval: ") && scanf("%d", &b) ; 
    printf("\nPrime Numbers Between %d And %d Are: ", a, b) ;
    for (i = a; i <= b; i++) 
    {
        if (i == 1 || i == 0)
            continue;
        g=1;
        for (j = 2; j <= i / 2; ++j) 
        { 
            if (i % j == 0) 
            {
                g = 0;
                break; 
            }
        }
        if (g == 1)
        {
            printf("%d ", i) ;
        }
    }
    printf("\n") ;
    
    return 0 ;
}
