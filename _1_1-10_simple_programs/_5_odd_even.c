// 5. Odd or Even

# import <stdio.h>

int main()
{
	int x;

	printf("\nOdd or Even\n");
	printf("Enter A Number To Check: ") && scanf("%d",&x);
	
	if (x%2==0)
		printf("\nThe Number You Have Entered Is Even.\n");
	else
		printf("\nThe Number You Have Entered Is Odd.\n");

	return 0;
}