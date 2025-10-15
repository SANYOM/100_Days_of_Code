// Q7 (User Inputs, Operations & Output)
// Write a program to swap two numbers without using a third variable.

#include<stdio.h>
int main()
{
    int n1;int n2;
    scanf("%d %d",&n1,&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("After swap: %d %d",n1,n2);
    return 0;
}