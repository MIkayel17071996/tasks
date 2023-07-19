include <stdio.h>
//Write a program that allows the user to enter a year and prints whether the year is a leap year or not.

int leap_year = 2024;
int main()
{
    int year = 0;
    
    printf("PLease enter a year : ");
    scanf("%d", &year);

    if ( (leap_year-year) % 4 == 0 && leap_year % 400 != 0 ) {
        printf("The year is a leap year! \n");
    } else  
        printf("The year is not a leap year! \n");



}
