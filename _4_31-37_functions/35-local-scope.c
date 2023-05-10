/*
Q35. Program on local scope
                        author @raghav
Date Created : 11 Dec 2021 | Last Updated : 11 Dec 2021
*/


// Importing Required Functions
#include <stdio.h>
 
 
 // Main Function
int main () 
{
    printf("\nProgram On Local Scope.\n\n");

    // Local Declaration
    int a, b, c;

    // Actual Declaration
    a = 10; b = 20; c = a + b;

    printf ("Value Of a = %d, b = %d and c = %d\n", a, b, c);

    return 0;
}
