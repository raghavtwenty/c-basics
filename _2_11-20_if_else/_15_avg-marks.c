// Q15. Calculate sum of 3 subjects and total percentage

#include<stdio.h>
int main()
{
	float m1, m2, m3, sum, percentage, perc;
	printf("\nAverage Of Three Subjects\n\n");
	printf("Input subject1 mark: ") && scanf("%f", &m1);
	printf("Input subject2 mark: ") && scanf("%f", &m2);
	printf("Input subject3 mark: ") && scanf("%f", &m3);

	sum = m1+m2+m3;
	percentage = (sum/300)*100;
	printf("\nThe sum of three subjects is: %f\n",sum);
	printf("The Total percentage is: %f\n",percentage);	

	return 0;
}