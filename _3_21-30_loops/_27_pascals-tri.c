#include <stdio.h>

int main()
{
    int n, i=1; 
    printf("\nPascals Triangle\n\n");

    printf("Enter Number Of Lines To Be Displayed: ") && scanf("%d", &n);
    while (i<=n)
    {
        int j =1;
        while (j<=i)
        {
                printf("*");
                j++;
        }
        printf("\n");
    i++;
    }
}