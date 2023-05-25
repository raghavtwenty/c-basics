/*
80. Program on Student details using structures
                        author @raghav
Date Created : 23 Jan 2022 | Last Updated : 23 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// Main
struct student
{
    int mark_scored ; 
}       s1,s2,s3,s4,s5 ;

int main() 
{
    s1.mark_scored=50 ; 
    s2.mark_scored=60 ; 
    s3.mark_scored=85 ; 
    s4.mark_scored=65 ; 
    s5.mark_scored=92 ;

    printf("\n\tMarks scored by the students\t\n"); 
    printf("Mark scored by student 1: %d\n", s1.mark_scored) ; 
    printf("Mark scored by student 2: %d\n", s2.mark_scored) ; 
    printf("Mark scored by student 3: %d\n", s3.mark_scored) ; 
    printf("Mark scored by student 4: %d\n", s4.mark_scored) ; 
    printf("Mark scored by student 5: %d\n", s5.mark_scored) ; 

    return 0 ;
}