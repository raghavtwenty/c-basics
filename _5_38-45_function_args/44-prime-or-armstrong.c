/*
Q44) Program to check Prime or Armstrong Number using User-defined Function
                        author @raghav
Date Created : 20 Dec 2021 | Last Updated : 20 Dec 2021
*/


// Importing Required Libraries 
#include <math.h> 
#include <stdio.h>


// Initializing Functions
int checkPrime(int num) ;
int checkArmstrong(int num) ;

// Main
int main()
{ 
    printf("\nPrime Or Armstrong Number.\n\n");

    int num ;
    
    printf("Enter An Integer Value: ") && scanf("%d", &num) ;

    if (checkPrime(num) == 0)
    {
        printf("%d Is A Prime Number.\n", num); 
    }
    else
    {
        printf("%d Is Not A Prime Number.\n", num) ;
    }


    if (checkArmstrong(num) == 0)
    {
    printf("%d Is An Armstrong Number.\n", num) ; 
    }
    else
    {
    printf("%d Is Not An Armstrong Number.\n", num) ;
    }
    
    return 0 ; 
}

// Functions
int checkPrime(int num)
{
    int i, count = 0 ;
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            count = 1;
    }
    if (num == 1)
        count = 1 ; 
    return count ;
}


int checkArmstrong(int num)
{
    int lastdigit = 0, power = 0, sum = 0 ; 
    int n = num ;
    while (n != 0)
    {
        lastdigit = n % 10 ;
        power = lastdigit * lastdigit * lastdigit ; 
        sum = sum + power ;
        n = n / 10 ;
    }

    if (sum == num)
        return 0 ; 
    else
        return 1 ; 
}
