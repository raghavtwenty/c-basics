/*
Q40) To print area and perimeter of a rectangle function 
with no argument with no return type
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021 
*/


// Importing Required Libraries 
#include<stdio.h>


// Initializing Variables
float length, width ;

// Functions
void arearectangleperi(void)
{
    printf("\nThe Area Of Rectangle: %.2f", length*width) ; 
    printf("\nThe Perimeter Of Rectangle: %.2f\n", 2*(length+width)) ;
}

// Main
int main()
{
    printf("\nPerimeter And Area Of The Rectangle.\n\n") ; 

    printf("Enter The Length Of The Rectangle: ") && scanf("%f", &length) ; 
    printf("Enter The Width Rectangle: ") && scanf("%f", &width) ; 
    arearectangleperi() ;

    return 0 ; 
}