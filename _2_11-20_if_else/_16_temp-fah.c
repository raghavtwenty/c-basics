// Q16. Convert temperature from fahrenheit to celsius

#import <stdio.h>

int main()
{
	float temp, fah, tf;
	printf("\nTemperature From Fahrenheit.\n\n");

	printf("Enter Temperature: ") && scanf("%f", &temp);
	tf = (temp*9/5)+32;
	printf("\nFahrenheit: %f\n", tf);

	return 0;
}