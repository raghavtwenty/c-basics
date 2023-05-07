// 9. Given input number is positive or negative

#import <stdio.h>

int main()
{
	int num;

	printf("\nThe number is Positive or Negative.\n");
	printf("\nEnter any Integer number to check: ") && scanf("%d", &num);

	if (num>0)
		printf("\nThe number you have entered is Positive.\n");
	else if (num<0)
		printf("\nThe number you have entered is Negative.\n");
	else
		printf("\nThe number you have entered is Zero.\n");

	return 0;
}