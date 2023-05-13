/*
57. Program to count all frequencies of the string elements.
                        author @raghav
Date Created : 28 Dec 2021 | Last Updated : 28 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h> 
#include <string.h> 


// Main
int main()
{
    printf("\nProgram To Count Frequencies Of The Characters In A String.\n\n") ;

    char str[100] ;
    int len ;

    printf("Enter The String : ") && scanf("%s", &*str) ;
    len = strlen(str) ;

    for (int i = 0 ; i < len ; i++) // Select Character 
    {
        int count = 1 ;
        for (int j = i+1 ; j < len ; j++) // Iterating From the Selected Character
        {
            if (str[i] == str[j]) // Comparison
            {
                count++ ;
                str[j] = '\0';
            } 
        }
        if (str[i] != '\0')
        {
            printf("%c Appears %d Times.\n", str[i], count) ;
        }
    }

    return 0 ;
}
