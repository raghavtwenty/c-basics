/*
Q83. menu driven linear & binary search  
                        author @raghav
Date Created :  21 Feb 2022 | Last Updated : 21 Feb 2022
*/


// Importing required libraries 
#include <stdio.h>


// User defined function
// Binary Search
int binarySearch(int arr[], int l, int n_1_terms, int ele)
{
    if (n_1_terms >= l)
    {
        // Middle term
        int mid = l + (n_1_terms - l) / 2 ;

        if (arr[mid] == ele)
            return mid ;
        if (arr[mid] > ele)
            return binarySearch(arr, l, mid - 1, ele) ;

        return binarySearch(arr, mid + 1, n_1_terms, ele) ;
    }

    return -1;
}

// Linear Search
void linear_search(int arr[], int ele, int flag, int found)
{
    for (int i = 0; i<10; i++)
        {
            if (arr[i] == ele)
            {
                flag = 1;
                found = i;
            }
            else 
            {
                continue ;
            }
        }

    if (flag == 1)
    {
        printf("Element Found At the Index : %d\n", found);
    }
    else 
    {
        printf("\nElement Not Found.\n");
    }
}


// Main
int main()
{
    int arr[10], ele, flag = 0, found, temp;
    int n, res, opt;

    printf("\nMenu driven linear & binary search \n");

    // Getting the user input
    for (int i = 0; i<10; i++)
    {
        printf("Enter The %dth Value : ", i) && scanf("%d", &arr[i]) ;
    }

    printf("\nEnter The Element To Be Found : ") && scanf("%d", &ele) ;

    printf("\n1 - Linear search \nOther key - Binary Search\n") ;
    printf("\nEnter Your Option : ") && scanf("%d", &opt) ;

    if (opt == 1)
    {
        linear_search(arr, ele, flag, found) ;
    }
    else 
    {
        // Ascending order sorting
        for (int i = 0; i<10; i++)
        {
            for (int j = 0; j<9; j++)
            {
                if (arr[i] < arr[j])  // next term greater than current term
                {
                    temp = arr[i] ;     // Swapping process
                    arr[i] = arr[j] ;
                    arr[j] = temp ;
                }
            }
        }

        // Show after sorting in ascending
        printf("\nSorted in Ascending Order : ") ;
        for (int i = 0; i<10; i++)
        {
            printf("%d,", arr[i]) ;
        }
        printf("\n");

        // Total terms
        n = sizeof(arr)/sizeof(arr[0]) ; 
        
        res = binarySearch(arr, 0, n-1, ele) ;

        // Final show
        (res == -1)
            ? printf("Element is not present in array\n")
            : printf( "Element is present at index (1st occurrance) %d\n",res) ;

    }
    
    return 0 ;
}