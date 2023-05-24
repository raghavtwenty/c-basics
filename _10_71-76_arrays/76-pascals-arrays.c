/*
76. Program to Generate Pascal Triangle 1 D Array.
                        author @raghav
Date Created : 10 Jan 2022 | Last Updated : 10 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Main
int main()
{
    // Initializing variables
    int rows, coef = 1 ;

    // User input
    printf("Enter The Number Of Rows : ") && scanf("%d", &rows) ;       // 5

    // Overall loop, according to the number of rows
    for (int i = 0; i < rows; i++)      // 1st iter | 0; True | 1; True | 2; True
    {
        // Spaces in the beginning of the line
        for (int space = 1; space <= rows - i; space++)     
        // 1st iter | 5-0=5 spaces | 5-1=4 spaces | 5-2=3 spaces | 5-3=2 spaces ...
        {
            printf("  ") ;
        }
        
        // Loop for printing the contents of the row
        for (int j = 0; j <= i; j++)        // 1st iter | 0, True | 1, True | 2, True
        {
            // If not the 1st element of the row neither last element
            if (j == 0 || i == 0)       // 1st iter | True | True
            {
                coef = 1 ;      // 1st iter left most element 1 | both left and right 1 | left 1 { Middle elements } right 1...
            }

            // Middle elements
            else
            {
                coef = coef * (i - j + 1) / j ;     // 3rd iter 2nd term| coef = 1*(2-1+1)/1 = 2
                // 4th iter 2nd term | coef = 1*(3-1+1)/1 = 3 | 3rd term = 1*(3-1+1)/1 = 3
                // 5th iter 2nd term | coef = 1*(4-1+1)/1 = 4 | 3rd term = 4*(4-2+1)/2 = 6 | 4th term = 6*(4-3+1)/3 = 4
            }

            // Final show for each row
            printf("%4d", coef) ;       // 4d space in-between the middle elements
            //     1   
            //    1 1
            //   1 2 1 
            //  1 3 3 1
            // 1 4 6 4 1
        }

        // Go to next row
        printf("\n") ;
    }

    return 0 ;
}