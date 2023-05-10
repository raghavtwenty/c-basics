/*
Q1. Comparison of two strings.
                        author @raghav
Date Created : 11 Dec 2021 | Last Updated : 11 Dec 2021
*/


// Importing Necessary Libraries
#include<stdio.h>
#include<string.h>


// Main function
int main()
{
    printf("\nString Comparison.\n\n");
	
    char str1[10]=" ",str2[10]=" ";
    
	printf("Enter The First String: ") && scanf("%s",&str1[0]);
	printf("Enter The Second String: ") && scanf("%s",&str2[0]);
	
    if(strcmp(str1,str2)==0)
    {
	    printf("\nThe Two Strings Are Equal.\n");
    }
	else
    {
	    printf("\nString Entries Doesn't Match.\n");
    }

    return 0;
}
