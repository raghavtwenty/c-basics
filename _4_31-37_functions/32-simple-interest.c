/* 
Q2. Calculate simple interest using a separate function definition.
                        author @raghav
Date Created : 11 Dec 2021 | Last Updated : 11 Dec 2021
*/


// Importing Necessary Libraries
#include <stdio.h>


// Simple Interest Function
float simpleinterest(float p, float r, float t)
{
	return (p*r*t)/100;
}

// Main Function
int main()
{
    printf("\nComputation Of Simple Interest.\n\n");
    
    float p,r,t;
    
    printf("Enter Principal Amount: ") && scanf("%f",&p);
    printf("Enter Rate Of Interest: ") && scanf("%f",&r);
    printf("Enter Number Of Years: ") && scanf("%f",&t);
    printf("\nComputed Simple Interest : %.2f\n", simpleinterest(p,r,t));
    
    return 0;
}
