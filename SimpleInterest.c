//Calculation of Simple Interest
#include<stdio.h>
int main()
{
    int p, t;
    float r, si;

    printf("\nEnter the principal amount: ");
    scanf("%d", &p);
    printf("\nEnter the time: ");
    scanf("%d", &t);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);

    si = p * t * r / 100;

    printf("\n%f\n", si);  

    return 0;
}