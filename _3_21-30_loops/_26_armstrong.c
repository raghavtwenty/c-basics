#include <stdio.h>
#include <math.h>

int main()
{
    int n, num, i=1;
    printf("\nArmstrong Number\n");

    printf("Enter A Number To Check: ") && scanf("%d", &n);
    num = n;
    int sum = 0;
    int dup = 0;
    while (num!=0)
    {
        dup = num%10;
        sum = sum+pow(dup,3);
        num = num/10;
    }
    if (n==sum)
    {
        printf("\nIt's Armstrong!\n");
    }
    else
    {
        printf("\nIt's Not An Armstrong\n");
    }
    return 0;
}