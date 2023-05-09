// Q19. Swapping of two numbers.

#import <stdio.h>

int main()
{
	int a, b;
	printf("\nSwap\n\n");

	printf("Enter 1st Number:  ") && scanf("%d", &a);
	printf("Enter 2nd Number:  ") && scanf("%d", &b);
	a=a+b; b=a-b; a=a-b;
	printf("\n1st Number: %d\n", a);
	printf("\n2nd Number: %d\n", b);
}