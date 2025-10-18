// Q9 (User Inputs, Operations & Output)
// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main()
{
    int p;int r;int t;int si;double ci;
    scanf("%d %d %d",&p,&r,&t);
    si=(p*r*t)/100;
    ci=p*pow((1+r/100.0),t)-p;
    printf("Simple Interest=%d, Compound Interest=%f",si,ci);
    return 0;
}