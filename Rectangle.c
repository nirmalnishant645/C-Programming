/*
Given the length and breadth of a rectanlge.
Write a program to find whether the area of the rectangle is greater than its perimeter.
*/
#include<stdio.h>

int main() {

    int l, b, a, p;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    a = l*b;
    p = 2*(l+b);

    if (a>p)
        printf("Area(%d) is greater than Perimeter(%d)", a, p);
    else if (a<p)
        printf("Perimeter(%d) is greater than Area(%d)", p , a);
    else
        printf("Area(%d) is equal to Perimeter(%d)", a, p);    

    return 0;

}