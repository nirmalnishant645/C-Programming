/*
WAP to check whether a trianlge is valid or not.
When three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180 degrees.
*/
#include<stdio.h>

int main() {

    float a, b, c;

    printf("Enter the three angles of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);

    if (a+b+c==180)
        printf("The trianlge with angles %.1f, %.1f, %.1f is valid", a, b, c);
    else
    {
        printf("The trianlge with angles %.1f, %.1f, %.1f is not valid", a, b, c);
    }

    return 0;
    
}
