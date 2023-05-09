// 4. Greatest of two numbers

# import <stdio.h>

int main()
{
	float x,y;

	printf("\nGreatest of Two Numbers\n");
	printf("Enter 1st Number: ") && scanf("%f", &x);
	printf("Enter 2nd Number: ") && scanf("%f", &y);
	
	if (x > y)
		printf("\n1st Number Is Greater Than 2nd Number.\n");
	else if (x == y)
		printf("\nBoth Numbers Are Equal.\n");
	else
		printf("\n2nd Number Is Greater Than 1st Number.\n");

	return 0;
}