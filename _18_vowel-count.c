// Q18. Finding the number of vowels.

#import <stdio.h>

int main()
{
	char s[1000];
	int count=0, c=0;

	printf("\nCounting Vowels.\n\n");

	printf("Enter A Word To Count Vowels: ") && scanf("%s", s);
	while (s[c]!='\0'){
		if (s[c] == 'a' || s[c] == 'A' || s[c] == 'e' 
			|| s[c] == 'E' || s[c] == 'i' || s[c] == 'I' 
			|| s[c] =='o' || s[c]=='O' || s[c] == 'u' || s[c] == 'U')
			count++;
		c++; 
	}
	printf("\nVowel Count: %d\n", count);

	return 0;
}