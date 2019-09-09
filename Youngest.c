/*
If the ages of Ram, Shyam and Ajay are input through the keyboard.
Write a program to determine the youngest of the three.
*/
#include<stdio.h>

int main() {

    int r,s,a;

    printf("Enter the Age of Ram, Shyam and Ajay respectively: ");
    scanf("%d%d%d", &r, &s, &a);

    if(r<s && r<a)
        printf("Ram(%d) is youngest.", r);
    else if(s<r && s<a)
        printf("Shyam(%d) is youngest.", s);
    else if(a<r && a<s)
        printf("Ajay(%d) is youngest", a);
    else
        printf("More that one person is youngest.");
    
    return 0;
}