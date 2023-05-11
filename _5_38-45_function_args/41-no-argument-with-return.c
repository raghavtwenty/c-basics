/*
Q41) To print area and perimeter of a rectangle function 
with no argument with return type
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021 
*/


// Importing Required Libraries 
#include<stdio.h>


// Initializing Variables
float length, width ;

// Functions
float arearectangle(void) 
{
    return length*width ;
}

float perimeterrectangle(void) 
{
    return 2*(length+width);
}

// Main
int main() 
{
    printf("\nPerimeter And Area Of The Rectangle.\n\n") ; 

    printf("Enter The Length Rectangle: ") && scanf("%f", &length) ; 
    printf("Enter The Width Rectangle: ") && scanf("%f", &width) ; 
    
    printf("\nThe Area Of Rectangle: %.2f", arearectangle()); 
    printf("\nThe Perimeter of the rectangle: %.2f\n",perimeterrectangle());

    return 0 ; 
}