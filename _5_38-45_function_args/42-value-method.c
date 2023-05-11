/*
Q42) To swap and print the variables entered using call by value
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021
*/


// Importing Required Libraries 
#include <stdio.h>


// Functions
void swap(int a, int b) 
{
    a=a+b; b=a-b; a=a-b ;
    printf("The Values Of A And B After Swapping Are %d And %d\n", a, b) ;
}

// Main
int main()
 {
    printf("\nSwapping The Values Of Two Variables.\n\n") ;

    int a, b ;

    printf("Enter The Value Of A: ") && scanf("%d", &a) ;
    printf("Enter The Value Of B: ") && scanf("%d", &b) ;
    printf("\nThe Values Of A and B Before Swapping Are %d And %d\n", a, b) ; 
    swap(a,b) ;

    return 0 ; 
}