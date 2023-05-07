// 2. Addition of two numbers

# include <stdio.h>

int main()
{
	float x,y, sum = 0;

	printf("\nAddition\n");
	printf("Enter 1st Number: ") && scanf("%f", &x);
	printf("Enter 2nd Number: ") && scanf("%f", &y);
	
	sum = x + y;
	printf("\nSum: %f \n",sum);

	return 0;
}