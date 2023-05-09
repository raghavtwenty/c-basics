// Q11. Program to print factorial numbers

#import <stdio.h>

int main()
{
	int num, fact = 1;
	int i = 0;
	
	printf("\nFactorial Of A Number.\n\n");

	printf("Enter A Integer: ") && scanf("%d", &num);
	while (i<num){
		fact *= (i+1);
	i++;
	}
	printf("\nFactorial Of %d Is %d\n", num, fact);
	
	return 0;
}