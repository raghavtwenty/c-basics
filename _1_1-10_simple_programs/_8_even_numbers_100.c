// 8. Even numbers till 100.

#include<stdio.h>

int main()
{
    int i;
	printf("\nThe even numbers till 100 are:\n");
	
	for(i=0;i<=100;i++)
		if(i%2==0)
			printf("%d, ", i);
	
	return 0;				
}