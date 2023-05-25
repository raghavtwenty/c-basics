/*
77. structures in c , local scope
                        author @raghav
Date Created : 24 Jan 2022 | Last Updated : 24 Jan 2022
*/


// Importing required libraries 
#include <stdio.h>


// Structure global
struct 
{
    char *name ;
    int age ;
    int salary ;
}       emp1,emp2 ;


// Manager function
int manager()
{
    // Structure inside function LOCAL
    struct
    {
        char *name ;
        int age ;
        int salary ;
    }       manager ;

    manager.age = 27 ;
    if(manager.age > 30)
    {
        manager.salary = 65000 ;
    }
    else
    {
        manager.salary = 55000 ;
    }

    return manager.salary ;
}


// Main
int main()
{
    printf("Enter The Salary of Employee1: ") && scanf("%d", &emp1.salary) ;
    printf("Enter The Salary of Employee2: ") && scanf("%d", &emp2.salary) ;
    
    printf("Employee1 Salary : %d\n", emp1.salary) ;
    printf("Employee2 Salary : %d\n", emp2.salary) ;

    printf("Manager's Salary : %d\n", manager()) ;

    return 0 ;
}
