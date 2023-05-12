/*
Q46. program to read and write using gets and puts
                        author @raghav
Date Created : 22 Dec 2021 | Last Updated : 23 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <string.h>


// Main 
int main()
{
    printf("\nProgram Using Gets And Puts.\n\n") ;

    char name[2100] ;

    puts("Enter Your Name: ") && gets(name) ;
    puts("The Name You Have Entered Is: ") && puts(name) ;
    
    return 0 ; 
}