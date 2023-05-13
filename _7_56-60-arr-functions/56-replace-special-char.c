/*
56. Program to replace each special character with "#" symbol 
                        author @raghav
Date Created : 28 Dec 2021 | Last Updated : 28 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 


// Main
int main()
{
    printf("\nProgram To Convert Each Special Character By #\n\n") ;

    char str[200] ;
    int i = 0 ;

    puts ("Enter The String: ") && gets (str) ;
    printf("\nString After Converting : \n") ;

    for ( ;str[i] != '\0'; )
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) 
        {
            printf("%c", str[i]) ;
        }
        else
        {
            printf("#") ;
        }
    i++ ;
    }
    
    printf("\n") ;

    return 0 ;
}
