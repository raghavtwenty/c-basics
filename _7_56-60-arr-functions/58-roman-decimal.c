/*
58. Program to convert roman numbers to decimal equivalent
                        author @raghav
Date Created : 28 Dec 2021 | Last Updated : 28 Dec 2021
*/


// Importing Required Functions
#include <stdio.h>
#include <string.h>


// Main
int main()
{
    printf("\nRoman Numbers To Decimal Equivalent.\n\n") ;

	char roman_num[100] ; 
	int i = 0, length, deci = 0, value[100] ;

	printf("Enter A Roman Number: ") && scanf("%s", &*roman_num) ;
	
    length = strlen(roman_num) ;

    for(i = 0 ; i<length ; i++)
    {
        switch(roman_num[i])
        {
            case 'I' : value[i] = 1 ; break ;
            case 'V' : value[i] = 5 ; break ;
            case 'X' : value[i] = 10 ; break ;
            case 'L' : value[i] = 50 ; break ;
            case 'C' : value[i] = 100 ; break ;
            case 'D' : value[i] = 500 ; break ;
            case 'M' : value[i] = 1000 ; break ;
            case '\0' : value[i] = 0 ; break ;
        }
    }

    for(i=0; i<length; i++)
    {
    if(i==length-1 || value[i]>=value[i+1])
        deci += value[i];
    else
        deci -= value[i];
    }
    printf("The Decimal Equivalent Of %s Is: %d\n", roman_num, deci) ;

    return 0 ;
}