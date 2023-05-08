// Q14. Find the number is prime or composite number

#include <stdio.h>

int main()
{
    int num, count;

    printf("\nPrime Or Composite\n\n");

    printf("Enter A Number To Check: ") && scanf("%d", &num);
    for (int i=2; i<=num; i++){
        if (num%i == 0)
            count += 1;
    }
    if (count == 1)
        printf("%d Is A Prime Number.\n", num);
    else
        printf("%d Is A Composite Number.\n", num);
    
    return 0;
}
