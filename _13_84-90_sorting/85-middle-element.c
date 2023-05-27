/*
Program to find the middle element in the linked list
                        author @raghav
Date Created : 28 Feb 2022 | Last Updated : 3 March 2022
*/


// Importing required libraries
#include <stdio.h> 
#include <stdlib.h> 


// Connector
struct node
{
int data ;
struct node *link ; 
} ;

// Display function
void print(struct node *head)
{ 
    if (head == NULL)
    {
        printf("Empty Linked List") ; 
    }
    struct node *prt = head ; 
    while (prt != NULL)
    {
        printf("%d -> ", prt -> data) ;
        prt = prt -> link ; 
    }
    printf("NULL\n") ; 
}

void middle(struct node *head)
{ 
    int size = 0 ;
    struct node *ptr = head ; 
    while (ptr != NULL)
    {
        size++ ;
        ptr = ptr -> link ; 
    }

    ptr = head ;
    int mid = (size/2) +1 ; 

    while (mid != 1)
    {
        ptr = ptr -> link ;
        mid-- ; 
    }
    printf("Middle Element : %d\n", ptr -> data) ; 
}


// Main
int main()
{
    struct node *head = malloc(sizeof(struct node)) ; 
    head -> data = 20 ;
    head -> link = NULL ;

    struct node *current = malloc(sizeof(struct node)) ; 
    current -> data = 40 ;
    current -> link = NULL ;
    head -> link = current ;

    current = malloc(sizeof(struct node)) ; 
    current -> data = 60 ;
    current -> link = NULL ;
    head -> link -> link = current ;

    current = malloc(sizeof(struct node)) ; 
    current -> data = 80 ;
    current -> link = NULL ;
    head -> link -> link -> link = current ;

    current = malloc(sizeof(struct node)); 
    current -> data = 100 ;
    current -> link = NULL ;
    head -> link -> link -> link -> link = current ;

    printf("Original linked list : \n") ; 
    print(head) ;
    middle(head) ;

    return 0 ;
}