/*
51. Program to compare two strings names as "five year course" and "five year" 
and display the result.
                        author @raghav
Date Created : 23 Dec 2021 | Last Updated : 23 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <string.h>


// Main
int main()
{
    printf("\nComparision Of Strings Using gets and puts.\n\n") ;

    char s1[100] ;
    char s2[100] ;

    puts("Enter the first string: ") && gets(s1) ;
    puts("Enter the second string: ") && gets(s2) ;

    if(strcmp(s1, s2) == 0)
    {
        printf("\nStrings Match.\n") ;
    }
    else
    {
        printf("\nStrings Does not Match.\n") ;
    }

    return 0 ;
}