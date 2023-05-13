/*
55. Program to convert string into specified characters
                        author @raghav
Date Created : 24 Dec 2021 | Last Updated : 24 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 
#include <string.h> 


// Main
int main()
{
    printf("\nProgram To Convert String Into Specified Characters.\n\n") ;

    char str[999] ;

    puts("Enter A String To Convert: ") && gets(str) ;

    puts("After Converting To Specified Character: ") ;
    puts(strset(str, '*')) ;

    return 0 ; 
}
