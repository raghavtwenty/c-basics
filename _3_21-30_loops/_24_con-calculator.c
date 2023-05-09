#include <stdio.h>

int main()
{
	printf("\nSimple Calculator\n");
    float a,b,result;
    char c;
	printf("\nEnter The Expression To Be Computed: ") && scanf("%f %c %f",&a,&c,&b);
	
	// Using If ... Else ...
	printf("\nUsing If...Else...\n");
	if(c=='+')
		result = a+b;
	else if(c=='-')
		result = a-b;
	else if(c=='*')
		result = a*b;
	else if(c=='/')
		result = a/b;
	else
    {
	    printf("Invalid Operation!\n");
    }	
	printf("%f %c %f = %f\n", a,c,b,result);

	// Using Switch Case
	printf("\nUsing Switch Case\n");
	switch (c)
	{
		case '+':
			printf("Addition Result: %f\n", a+b);
			break;
		case '-':
			printf("Subtraction Result: %f\n", a-b);
			break;
		case '*':
			printf("Multiplication Result: %f\n", a*b);
			break;
		case '/':
			printf("Division Result: %f\n", a/b);
			break;
	}
	

	return 0;
}