#include <stdio.h>

int main()
{
    int n, i=1, j=1, k=1;
    printf("\nLooping Welcome\n\n");

    printf("Enter The Total Number Of Times: ") && scanf("%d", &n);
 
    // for loop
    printf("\nFor Loop\n");
    for (;i<=n;)
    {
        printf("Hola!!!\n");
        i++;
    }

    // while loop
    printf("\nWhile Loop\n");
    while (j<=n)
    {
        printf("Hallo!!!\n");
        j++;
    }

    // Do while loop
    printf("\nDo While\n");
    do
    {
        printf("Hello!!!\n");
        k++;
    }
    while (n!=k);

    return 0;
}