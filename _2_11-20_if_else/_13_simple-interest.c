// Q13. Simple Interest for the amount

#import <stdio.h>

int main()
{
	float si, p, r, t, r1;
	printf("\nSimple Interest.\n\n");

	printf("Enter Principal Amount: ") && scanf("%f", &p);
	printf("Enter Rate Of Interest In Percentage: ") && scanf("%f", &r);
	printf("Enter Time In Years: ") && scanf("%f", &t);

	// si =prt
	r1 = r/100;
	si = p*r1*t;
	printf("\nSimple Interest: %f\n", si);

	return 0;
}