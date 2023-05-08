// Q17. Fibonacci series

#include<stdio.h>

int main()
{
	int f,i,n1,n2,n3;
	printf("\nFibonacci Series.\n\n");
	printf("Enter The Number Of Terms In The Series: ") && scanf("%d",&f);
	n1=1;
	n2=1;
	printf("%d\n%d",n1,n2);
	for (i=3; i<=f; i++)
	{
		n3=n1+n2;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;	
	}	
	return 0;
}

/* Recursion

#import <stdio.h>

int feb(num)
{
	if (num==1)
		return 0;
	else if (num==2)
		return 1;
	else
		return feb(num-1)+feb(num-2);
}

int main()
{
	int num, i;
	printf("\nFibonacci Series.\n\n");

	printf("Enter The Last Number: ") && scanf("%d", &num);
	for (i=1; i<=num; i++)
		printf("%d\n",feb(num));

	return 0;
}
*/
