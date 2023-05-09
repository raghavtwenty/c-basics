// 10. Average of Three Numbers

#import <stdio.h>

int main()
{ 
	int i;
	float a;
	double average;

	printf("\nAverage of three numbers.\n");

	for (i=0; i<3; i++)
		printf("Enter %d number: ", i) && scanf("%f", &a);
	a+=a;

	average = a/3;
	printf("\nAverage of three numbers: %f\n", average);

	return 0;
}