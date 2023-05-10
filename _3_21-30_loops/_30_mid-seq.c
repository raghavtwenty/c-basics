#include<stdio.h> 

int main() 
{ 
    int a,b,c,d; 
    printf("\nEnter 3 numbers: "); 
    scanf("%d %d %d",&a,&b,&c); 
    d=(a<b) && (a>c) ? a:((c<a) && (c>b) ? c:b); 
    printf("The middle of these numbers is: %d\n\n ",d); 
}

/*
#include <stdio.h>

int main()
{
    int n, i, j, arr[100];
    int val, temp, mid, mid_val;
    printf("\nMiddle Number In The Sequence.\n\n");

    printf("Enter Number The Of Values In Array: ") && scanf("%d", &n);

    // Append to original Array
    for (i=1;i<=n;)
    {
        printf("Enter The %dth Value: ", i) && scanf("%d", &arr[i]);
        i++;
    }

    // Array before sorting
    printf("\nArray Before Sorting: "); 
    for (i=1;i<=n;)
    {
        printf("%d,", arr[i]);
        i++;
    }

    // Array sorting
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (arr[i]>arr[j])
            {
                // start swap
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]= temp;
                // end swap
            }
        }
    }

    // Array After sorting
    printf("\nArray After Sorting: "); 
    for (i=1;i<=n;)
    {
        printf("%d,", arr[i]);
        i++;
    }

    // find the middle
    mid = n/2;
    mid_val = (n%2==0)?1: 0;
    if (mid_val==1) 
    {
        printf("\nThe Middle Numbers Are: %d, %d", arr[mid], arr[mid+1]);
    }
    else
    {
       printf("\nThe Middle Number Is: %d", arr[mid+1]); 
    }

    return 0;
}
*/