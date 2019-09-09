/*
Any integer is input through the keyboard.
WAP to find out the year is a leap year or not.
*/
#include<stdio.h>

int main() {

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n%2==0)
        printf("%d is Even", n);
    else 
        printf("%d is Odd", n);

    return 0;
}