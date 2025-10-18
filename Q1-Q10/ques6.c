// Q6 (User Inputs, Operations & Output)
// Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main()
{
    int n1;int n2;
    scanf("%d %d",&n1,&n2);
    int r=n1;
    n1=n2;
    n2=r;
    printf("%d %d",n1,n2);
    return 0;
}