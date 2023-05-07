// 3. Multiplication of two numbers

# import <stdio.h>

int main()
{
	float x,y, mul = 0;

	printf("\nMultiplication\n");
	printf("Enter 1st Number: ") && scanf("%f", &x);
	printf("Enter 2nd Number: ") && scanf("%f", &y);
	
	mul = x * y;
	printf("\nMultiplication: %f \n", mul);

	return 0;
}