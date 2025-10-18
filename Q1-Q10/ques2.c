// Q2 (User Inputs, Operations & Output)
// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include<stdio.h>
int main()
{
    int n1;int n2;int sum;int prod;int diff;int quot;
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    printf("Sum=%d",sum);
    printf(", Diff=%d",diff);
    printf(", Product=%d",prod);
    if(n2==0)
    {
        printf(", Division by zero is not possible");
    }
    else
    {
        quot=n1/n2;
        printf(", Quotient=%d",quot);
    }    
}