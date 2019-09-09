/*
If cost price and selling price of an item is input through the keyboard.
WAP to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred.
*/
#include<stdio.h>

int main() {

    int CP, SP, P;

    printf("Enter the Cost Price: ");
    scanf("%d", &CP);
    printf("Enter the Selling Price: ");
    scanf("%d", &SP);

    P = SP-CP;

    if (P>0)
        printf("Profit of %d", P);
    else if (P<0)
        printf("Loss of %d", abs(P));
    else
        printf("No Profit/Loss!");

    return 0;
    
}