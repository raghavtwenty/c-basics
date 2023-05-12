/*
Q49. Program to find the length of the string.
						author @raghav
Date Created : 11 Dec 2021 | Last Updated : 23 Dec 2021
*/


// Importing Necessary Libraries
#import <stdio.h> 
#import <string.h> 


// Main function
int main()
{
	printf("\nFinding Length Of The String.\n\n") ; 
	
	char arr[999] ; 

	puts("Enter The String: ") && gets(arr) ;
	printf("\nLength Of The String: %lu\n", strlen(arr)) ;
	
	return 0 ; 
}