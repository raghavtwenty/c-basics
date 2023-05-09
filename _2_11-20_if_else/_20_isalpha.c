// Q20. To check whether a character is an alphabet or not.

#import <stdio.h>
#import <ctype.h>
#import <stdlib.h>

int main()
{
	char str;
	int i;
	printf("\nAlphabet Or Not.\n\n");

	printf("Enter The Character: ") && scanf("%s", &str);
	if (isalpha(str)!=0)
			printf("\nIt's An Alphabet.\n");
	else
			printf("\nIt's Not An Alphabet.\n");
	
	return 0;
}