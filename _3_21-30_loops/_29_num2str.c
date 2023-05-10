#include <stdio.h> 

int main()
{
	int i=0; 
	char num[9999]= " ";

	printf("\nInteger To Words\n\n");
	printf("Enter A Integer  Value: ") && scanf("%s", &num[0]); 

	for (; num[i] != '\0';)
	{
		//printf("%c", num[i]);
		if (num[i]=='1')
		{
			printf("One ");
		}
		else if (num[i]=='2')
		{
			printf("Two ");
		}
		else if (num[i]=='3')
		{
			printf("Three ");
		}
		else if (num[i]=='4')
		{
			printf("Four ");
		}
		else if (num[i]=='5')
		{
			printf("Five ");
		}
		else if (num[i]=='6')
		{
			printf("Six ");
		}
		else if (num[i]=='7')
		{
			printf("Seven ");
		}
		else if (num[i]=='8')
		{
			printf("Eight ");
		}
		else if (num[i]=='9')
		{
			printf("Nine ");
		}
		else if (num[i]=='0')
		{
			printf("Zero ");
		}
		else if (num[i]=='-')
		{
			printf("Minus ");
		}
		else 
		{
			printf("\nAn Alphabet Had Been Deducted.");
		}
		i++;
		printf(" ");
	}
}

