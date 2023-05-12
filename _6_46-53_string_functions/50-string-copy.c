/*
50. Program to copy one string to the another.
                        author @raghav
Date Created : 23 Dec 2021 | Last Updated : 23 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <string.h>


// Main
int main()
{
    puts("\nProgram To Copy One String To The Other.\n\n") ;

    char str[999], strcp[999] ; 
    
    puts("Enter The String: ") && gets(str) ;
    strcpy(strcp, str) ;
    puts("Copied String: ") && puts(strcp) ;

    return 0 ;
}