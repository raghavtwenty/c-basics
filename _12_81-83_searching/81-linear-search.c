/*
Q1. Implementing Linear Search in C by entering 10 array values 
and for a given value  find the index of the array 
                        author @raghav
Date Created :  21 Feb 2022 | Last Updated : 21 Feb 2022
*/


// Importing required libraries 
#include <stdio.h>


// Main
int main()
{
    int arr[10], ele, flag = 0, found;

    printf("\nLinear Search\n");

    // Getting the user input
    for (int i = 0; i<10; i++)
    {
        printf("Enter The %dth Value : ", i) && scanf("%d", &arr[i]);
    }

    printf("\nEnter The Element To Be Found : ") && scanf("%d", &ele);

    for (int i = 0; i<10; i++)
    {
        if (arr[i] == ele)
        {
            flag = 1;
            found = i;
        }
        else 
        {
            continue ;
        }
    }

    if (flag == 1)
    {
        printf("Element Found At the Index : %d\n", found);
    }
    else 
    {
        printf("\nElement Not Found.\n");
    }

    return 0;
}