/*
Q52. Appending a string to an existing string.
                        author @raghav
Date Created : 24 Dec 2021 | Last Updated : 24 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <string.h>


// Main
int main()
{
    puts("\nAppending A String To A Existing String.\n\n") ;

    char str[999], ch[999] ;

    puts("Enter The First String: ") && gets(str) ;
    puts("Enter The String To Append: ") && gets(&*ch) ;

    puts("Appended String: ") && puts(strcat(str, &*ch)) ;

    return 0 ;
}
