/*
Q34. Program to illustrate scope of a variable
                        author @raghav
Date Created : 11 Dec 2021 | Last Updated : 11 Dec  2021
*/


// Importing Necessary Libraries
#include<stdio.h>


// Main Function
int main()
{
    printf("\nProgram To Illustrate Scope Of Variables.\n\n");

	int x = 1, y = 2, z = 3;

	printf("Initial Values Are: x = %d, y = %d, z = %d\n",x, y, z);
	{
		int x = 10;
		float y = 50;
		
		printf("\nAfter Changing The Values Of x & y : x = %d, y = %f, z = %d\n",x, y, z);
		{
			int z = 700;
			printf("\nAfter Changing The Value Of z : x = %d, y = %f, z = %d\n",x, y, z);
		}
	}

  return 0;
}
