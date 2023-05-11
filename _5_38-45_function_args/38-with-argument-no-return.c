/*
Q38) To print the area and circumference of circle using 
function with argument with no return type
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>


// Creating functions
void circumandarea(float radius) 
{
    printf("\nCircumference Of The Circle With Radius %.2f Is: %.2f", radius, 6.28*radius) ;
    printf("\nArea Of The Circle With Radius %.2f Is: %2.f\n", radius, 3.14*radius*radius) ;
}

// Main Function
int main()
{
    printf("\nArea And Circumference Of The Circle.\n\n") ;

    float radius ;

    printf("Enter The Radius: ") && scanf("%f", &radius) ;
    circumandarea(radius) ; 

    return 0 ;
}
