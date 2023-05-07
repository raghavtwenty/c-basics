// To run in Terminal
// gcc -o filename filename.c
// ./filename
// 1. Hello World

#include <stdio.h>

int main()
{
	char name[50];
	 
	printf("\nEnter your name: ") && scanf("%s", name);
	printf("\nHello, %s !!!\n", name);
	
	return 0;
}

