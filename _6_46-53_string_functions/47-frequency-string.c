/*
Q47. Find frequency of characters in a string
                        author @raghav
Date Created : 22 Dec 2021 | Last Updated : 23 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>
#include <stdio.h>


// Main
int main()
{
    printf("\nFinding The Frequency Of Characters In A String.\n\n") ;

    char str[2000], ch ;
    int count=0 ;
    
    puts("Enter The String: ") && gets(str) ;
    puts("Enter A Character To Find It's Frequency: ") && gets(&ch) ;

    for(int i=0; str[i]!='\0'; ++i)
    {
        if (ch==str[i])
            ++count ;
    }
    printf("\nFrequency Of %c = %d", ch, count) ;

    return 0 ;
}