/*
According to the Georgian Calendar, it was Monday on the date 01/01/01. 
If any year is input throught eh keyboard, WAP to find out what is the day on 1st January of this year.
*/
#include<stdio.h>


int main() {

    int d=1,y,i;

    printf("Enter the Year: ");
    scanf("%d", &y);

    for (i=1;i<y;i++) {

        if (i % 100 != 0 && i % 4 == 0)
            d+=366;
        else if (y % 400 == 0)
            d+=366;
        else
            d+=365;
    }

    if (d%7==1)
        printf("01/01/%.4d is Monday",y);
    else if (d%7==2)
        printf("01/01/%.4d is Tuesday", y);
    else if (d%7==3)
        printf("01/01/%.4d is Wednesday", y);
    else if (d%7==4)
        printf("01/01/%.4d is Thursday", y);
    else if (d%7==5)
        printf("01/01/%.4d is Friday", y);
    else if (d%7==6)
        printf("01/01/%.4d is Saturday", y);
    else if (d%7==0)
        printf("01/01/%.4d is Sunday", y);
    else
        printf("Invalid Input");

    return 0;
}