/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If quantity and price per item are input, WAP to calculate the total expenses.
*/
#include<stdio.h>
int main()
{
    int qty, dis=0;
    float rate, tot;
    printf("Enter quantity: ");
    scanf("%d", &qty);
    printf("Enter rate: ");
    scanf("%f", &rate);
    
    if (qty > 1000)
        dis = 10;
    
    tot = (qty*rate)-(qty*rate*dis/100);
    printf("Total Expenses = Rs. %f", tot);
    
    return 0;
}