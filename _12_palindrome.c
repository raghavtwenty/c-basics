// Q12. Check whether a number is palindrome or not.

#import <stdio.h>

int main()
{
	int num, ans=0, in_val, i;
	printf("\nPalindrome Or Not.\n\n");
	printf("Enter Number To Check: ") && scanf("%d", &in_val);
	num = in_val;
	while (num>0){
		i = num%10;
		ans = (ans*10)+i;
		num/=10;
	}

	if (in_val==ans)
		printf("\nIt's A Palindrome.\n");
	else
		printf("\nIt's Not A Palindrome.\n");
	return 0;
}