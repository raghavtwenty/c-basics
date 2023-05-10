/* 
Q36. Program for global scope declaration.
                        author @raghav
Date Created : 12 Dec 2021 | Last Updated : 12 Dec 2021
*/


// Importing Required Libraries
#include<stdio.h>


// Global Declaration
int num1, num2 ;    

// Main Function
int main()
{	
    printf("\nProgram For Global Scope Declaration.\n\n");
    
    void addition();
    void subtraction();
    void multiplication(); 
    
    num1 = 10;
    num2 = 20;
    printf("Number 1 = %d, Number 2 = %d", num1, num2);
    
    addition();
    subtraction(); 
    multiplication();

    return 0;
}

// Addition Function
void addition()
{
    int result ;
    result = num1+num2 ;
    printf("\nAddition = %d", result);
}

// Subtraction Function
void subtraction()
{
    int result ;
    result = num1-num2 ;
    printf("\nSubtraction = %d", result);
}

// Multiplication Function
void multiplication()
{
    int result ;
    result = num1*num2;
    printf("\nMultiplication = %d", result);
}
