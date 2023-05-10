/*
Q37. Program for formal parameter.
                        author @raghav
Date Created : 12 Dec 2021 | Last Updated : 12 Dec 2021
*/


// Importing Required Libraries
#include <stdio.h>


// Main Function
int main()
{
    printf("\nProgram For Formal Parameters.\n\n");

    void addition(int, int);

    int num1, num2;
    num1 = 10 ;
    num2 = 20 ;

    addition(num1, num2);

    return 0;
}

// Addition Function
void addition(int a, int b)
{
    int sumresult;
    sumresult = a+b;
    printf("Addition = %d", sumresult);
}
