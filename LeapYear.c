/*
Any year is input through the keyboard.
WAP to determine whether the year is a leap year or not.
*/
#include<stdio.h>

int main() {

    int y;

    printf("Enter the year: ");
    scanf("%d", &y);

    if (y%100!= 0 && y%4==0)
        printf("%d is a Leap Year", y);
    else if (y%400==0)
        printf("%d is a Leap Year", y);
    else
        printf("%d is not a Leap Year", y);

    return 0;
}