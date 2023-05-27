/*
search the element in the linked list
                        author @raghav
Date Created : 12 March 2022 | Last Updated : 12 March 2022
*/


// Importing required libraries
#include <stdlib.h>
#include <stdio.h>


// connector
struct node 
{
    int data ;
    struct node *link ;
} ;


// print function for linked list
void print(struct node *head)
{
    if (head == NULL)
    {
        printf("\nLinked list empty.\n") ;
    }
    struct node *ptr = head ;
    while (ptr != NULL)
    {
        printf("%d -> ",ptr -> data) ;
        ptr = ptr->link ;
    } 
    printf("NULL\n") ;
}


// search
void search(struct node *head, int ele)
{
    struct node *ptr = head ;
    int count = 0 ;
    int temp ;
    while (ptr != NULL)
    {
        temp = ptr -> data ;
        if (temp == ele)
        {
            printf("\nElement found at index : %d\n", count) ;
            break ;
        }
        else
        {
            ptr = ptr->link ;
        }
        count ++ ;
    } 
}


// Main Execution
int main()
{
    int ele ;

    // created nodes in linked lists
    struct node  *head = malloc(sizeof(struct node)) ;
    head -> data = 50 ;

    struct node *current= malloc(sizeof(struct node)) ;
    current -> data = 60 ;
    head -> link = current ;

    current = malloc(sizeof(struct node)) ; 
    current -> data = 75 ;
    head -> link -> link = current ; 

    printf("\nThe linked list : ") ;
    print(head) ;

    printf("Enter the element to be found : ") && scanf("%d", &ele) ;
    search(head, ele) ;

    return 0 ;
}