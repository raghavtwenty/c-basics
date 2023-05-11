/*
Q39) To print area and circumference of a circle function 
with argument with return type
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021 
*/


// Importing Required Libraries 
#include <stdio.h>


// Functions
float circumferencecircle(float r) 
{
    return 6.28*r ;
}

float area(float r)
{
    return 3.14*r*r ;
} 


// Main Function
int main()
{
    printf("\nArea And Circumference Of The Circle.\n\n") ;

    float radius ;

    printf("Enter The Radius: ") && scanf("%f", &radius) ; 
     ;
    printf("The Circumference Of The Circle With Radius %.2f Is:%.2f", radius, circumferencecircle(radius)); 
    printf("\nThe Area Of The Circle With Radius %.2f Is: %.2f\n", radius, area(radius)) ; 
   
    return 0;
}