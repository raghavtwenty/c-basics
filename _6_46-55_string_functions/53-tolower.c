/*
53. Program to convert Upper case and lower case to the string 
"COIMBATORE institute OF TECHNOLOGY"
                        author @raghav
Date Created : 24 Dec 2021 | Last Updated : 24 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 
#include <string.h> 


// Main
int main()
{
    printf("\nUppercase To Lowercase.\n\n") ;

    char str[999] ;

    puts("Enter A String To Convert: ") && gets(str) ;

    puts("After Converting To Lowercase: ") ;
    puts(strlwr(str)) ;

    return 0 ; 
}
