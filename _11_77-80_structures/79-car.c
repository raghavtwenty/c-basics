/*
79. Program on car specification using structures
                        author @raghav
Date Created : 24 Jan 2022 | Last Updated : 24 Jan 2022
*/


// Importing required libraries
#include <stdio.h>


// structure car
struct car 
{
    char engine[50] ;
    char fuel_type[10] ;
    float fuel_tank_capacity ;
    int seating_capacity ;
    float city_mileage ;
} ;


// Main
int main()
{
    struct car c1 = {"DD is 190 Engine", "Diesel", 37, 5, 19.74} ;
    struct car c2 = {"Kappa", "Petrol", 22, 4, 14.5} ;

    printf("%s \t %s \t %f \t %d \t %f\t\n", c1.engine, c1.fuel_type, c1.fuel_tank_capacity, 
        c1.seating_capacity, c1.city_mileage) ;
    printf("%s \t %s \t %f \t %d \t %f\t", c2.engine, c2.fuel_type, c2.fuel_tank_capacity, 
        c2.seating_capacity, c2.city_mileage) ;

    return 0 ;
}


