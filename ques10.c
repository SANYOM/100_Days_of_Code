// Q10 (User Inputs, Operations & Output)
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main()
{
    int s;int h;int m;
    scanf("%d",&s);
    h=s/3600;
    m=(s%3600)/60;
    s=s%60;
    printf("%d:%d:%d",h,m,s);
    return 0;
}