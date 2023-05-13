/*
Q63. Print n natural numbers using recursion
                        author @raghav
Date Created : 31 Dec 2021 | Last Updated : 31 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>


// Functions
void natural (int num) ;


// Main
int main ()
{
    printf ("\nProgram To Print N Natural Numbers Using Recursion.\n\n") ;

    int num ;

    printf ("Enter The Number Of Terms: ") && scanf("%d", &num) ;

    printf ("\nN Natural Numbers Are: ") ;
    natural (num) ;

    return 0 ;
}

// 
void natural (num)
{
    if (num <= 0) 
    {
        printf ("Stop\n") ; 
    }
    else 
    {
        printf ("%d\n", num) ;
        natural (num - 1) ;   
    }
}
