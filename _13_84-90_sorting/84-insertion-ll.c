/*
Program to insert and delete in linked list
                        author @raghav
Date Created : 28 Feb 2022 | Last Updated : 3 March 2022
*/


// Importing required libraries
#include <stdio.h> 
#include <stdlib.h> 


// connector
struct node
{
    int data ;
    struct node *link ; 
} ;


// display function
void print(struct node *head)
{ 
    if (head == NULL)
    printf("Empty Linked List") ; 
    struct node *prt = head ; 
    while (prt != NULL)
    {
        printf("%d -> ", prt -> data) ;
        prt = prt -> link ; 
    }
    printf("NULL\n") ;
}


// adding node function
void add(struct node *head,int val,int pos)
{
    struct node *temp = malloc(sizeof(struct node)) ; 
    temp -> data = val ;
    temp -> link = NULL ;
    pos-- ;
    struct node *ptr = head ;
    while (pos != 1)
    {
        ptr = ptr -> link ;
        pos-- ; 
    }
    temp -> link = ptr -> link ; 
    ptr -> link = temp ;
}


// delete function
void del(struct node *head, int pos)
{ 
    struct node *ptr = head, *ptr2 ; 
    pos-- ;
    while (pos != 1)
    {
        ptr = ptr -> link ;
        pos-- ; 
    }
    ptr2 = ptr -> link ;
    ptr -> link = ptr2 -> link; 
    free(ptr2) ;
    ptr2 = NULL ;
}


// Main
int main()
{
    struct node *head = malloc(sizeof(struct node)) ; 
    head -> data = 25 ;
    head -> link = NULL ;

    struct node *current = malloc(sizeof(struct node)) ; 
    current -> data = 50 ;
    current -> link = NULL ;
    head -> link = current ;

    current = malloc(sizeof(struct node)) ; 
    current -> data = 75 ;
    current -> link = NULL ;
    head -> link -> link = current ; 

    printf("Original linked list : \n") ; 
    print(head) ;

    add(head, 60, 3) ;
    printf("After adding 60 at position 3 in linked list:\n") ; 
    print(head) ;

    del(head , 3) ;
    printf("After deleting the node at position 3 in linked list:\n") ; 
    print(head) ;

    return 0 ;
}
