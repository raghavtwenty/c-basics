#include <stdio.h>

int main()
{
    float a, b, c, d;
    printf("\nGreatest Of Three Numbers.\n\n");

    printf("Enter 1st Number: ") && scanf("%f", &a);
    printf("Enter 2nd Number: ") && scanf("%f", &b);
    printf("Enter 3rd Number: ") && scanf("%f", &c);

    d = (a>=b)&&(a>=c)?a:((b>c)?b:c);
    printf("\nGreatest Number: %f", d);
    
    return 0;
}