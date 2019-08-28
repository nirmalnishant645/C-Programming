/*
The current year and the year in which the employee joined the organization are entered through the keyboard.
If the number of years for which the employee has served the organization is greater than 3 then a bonus of Rs. 2500/- is given to the employee.
If the years of service are not greater than 3, then the program should do nothing.
*/
#include<stdio.h>
int main()
{
    int bonus, cy, yoj, yr_of_ser;

    printf("Enter the current year: ");
    scanf("%d", &cy);
    printf("Enter the year of joining: ");
    scanf("%d", &yoj);
    
    yr_of_ser = cy-yoj;

    if(yr_of_ser>3)
    {
        bonus = 2500;
        printf("Bonus = Rs. %d/-", bonus);
    }
    else
    {
        printf("No Bonus");
    }
     

    return 0;
}