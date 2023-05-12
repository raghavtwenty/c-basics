/*
55. Program to reverse the string.
                        author @raghav
Date Created : 24 Dec 2021 | Last Updated : 24 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 
#include <string.h> 


// Main
int main()
{
    printf("\nProgram To Reverse The String.\n\n") ;

    char str[999] ;

    puts("Enter A String To Reverse: ") && gets(str) ;

    puts("String After Reversing: ") ;
    puts(strrev(str)) ;

    return 0 ; 
}
