// Q3 (User Inputs, Operations & Output)
// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<stdio.h>
int main()
{
    int l;int b;
    scanf("%d %d",&l,&b);
    int per=2*(l+b);
    int ar=l*b;
    printf("Area=%d",ar);
    printf(", Perimeter=%d",per);
    return 0;
}