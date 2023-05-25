/*
78. Program on employee salary using global scope (Structure)
                        author @raghav
Date Created : 24 Jan 2022 | Last Updated : 24 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Structure employee
struct employee
{
    char *name ;
    int age ;
    int salary ;
} ;

// Manager Function
int manager()
{
    struct employee manager ;
    manager.age = 35 ;

    if(manager.age >30)
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
    struct employee emp1 ;
    struct employee emp2 ;

    printf("Enter The Salary Of Employee1: ") && scanf("%d", &emp1.salary) ;
    printf("Enter The Salary Of Employee2: ") && scanf("%d", &emp2.salary) ;

    printf("Employee1 Salary is: %d\n", emp1.salary) ;
    printf("Employee2 Salary is: %d\n", emp2.salary) ;

    printf("Manager's Salary is: %d\n",manager()) ;

    return 0 ;
}
