/*
Q48. Appending a character to an existing string.
                        author @raghav
Date Created : 23 Dec 2021 | Last Updated : 24 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <string.h>


// Main
int main()
{
    puts("\nAppending A Character To A Existing String.\n\n") ;

    char str[999], ch ;

    puts("Enter The First String: ") && gets(str) ;
    puts("Enter The Character To Append: ") && gets(&ch) ;

    puts("String After Appending Character: ") && puts(strcat(str, &ch)) ;

    return 0 ;
}
