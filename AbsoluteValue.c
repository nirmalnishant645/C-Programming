/*
Find the absolute value of a number entered through keyboard
*/
#include<stdio.h>

int main() {

    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Absolute value is %d", abs(n));

    return 0;
}