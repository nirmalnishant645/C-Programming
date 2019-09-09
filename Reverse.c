/*A five digit number is entered through the keyboard.
WAP to obtain the reversed number.
Determine whether the original and reversed numbers are equal or not.
*/
#include<stdio.h>

int main() {

    int x,n,m=0;

    printf("Enter a number: ");
    scanf("%d", &n);
    x=n;

    while(x>0) {

        m=(m*10)+x%10;
        x=x/10;
    }

    printf("Reverse of %d is %d",n,m);
    
    if (m==n)
        printf("\nReversed Number is Equal");
    else
        printf("\nReversed Number is not equal");
    
    return 0;
    
}