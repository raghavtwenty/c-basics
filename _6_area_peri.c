// 6. Area and Perimeter of Rectangle

# import <stdio.h>

int main()
{
	float x,y, Perimeter = 0, Area = 0;

	printf("\nArea And Perimeter Of Rectangle\n");
	printf("Enter Length: ") && scanf("%f", &x);
	printf("Enter Breadth: ") && scanf("%f", &y);
	
	Perimeter = 2*(x+y);
	Area = x*y;
	printf("\nCalculated Perimeter: %f", Perimeter);
	printf("\nCalculated Area: %f\n", Area);

	return 0;
}