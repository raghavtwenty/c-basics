// 7. Area of circumference of a circle

#import <stdio.h>

int main()
{
	float r, Cir;

	printf("\nArea of Circumference of a Circle.\n");
	printf("Enter Radius of the Circle: ") && scanf("%f", &r);
	Cir = 2*3.14*r;

	printf("\nThe Circumference of the Circle: %f \n", Cir);
	return 0;
}