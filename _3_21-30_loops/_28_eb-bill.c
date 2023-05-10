#include <stdio.h>

int main()
{
    int unit=0;
    float amount;
    printf("\nEB Bill Calculator\n\n");
    printf("Enter The Number Of Units Consumed: ") && scanf("%d", &unit);

    if(unit<=100)
        amount = 0;
    else if(100<unit && unit<=200)
        amount=(unit-100)*1.5;
    else if(200<unit && unit <=500)
        amount=(100*2)+((unit-200)*3);
    else
        amount=(100*3.5)+(300*4.6)+((unit-500)*6.6);

    printf("Electricity bill = Rs. %.2f\n",amount);
    
    return 0;
}