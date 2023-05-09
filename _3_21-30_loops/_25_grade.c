#include <stdio.h>

int main()
{
    int i=1, perc;
    float  mark=0, arr[5];
    printf("\nAverage Of Five Subjects.\n");

    // Mark Array 
    for (;i<=5;)
    {
        printf("\nEnter The Mark Of %d Subject: ", i) && scanf("%f", &arr[i]);
        i++;
    }

    // Addition
    for (i=1;i<=5;i++)
    {
        mark+= arr[i];
    }
    printf("\nTotal Mark: %f\n", mark);
    perc = mark/5;
    printf("Overall Percentage: %d\n", perc);
    

    // Grade check
    if (perc<40)
        printf("\nFail");

    else if (40<=perc && perc<55)
        printf("\nPass & Third Division\n");
    
    else if (55<=perc && perc<65)
        printf("\nSecond Division\n");

    else if (65<=perc && perc<80)
        printf("\nFirst Division\n");

    else if (80<=perc && perc<90)
        printf("\nDistinct\n");

    else if (90<=perc && perc<=100)
        printf("\nExtraordinary\n");
    
    return 0;
}