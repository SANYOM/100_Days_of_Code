// Q4 (User Inputs, Operations & Output)
// Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>
int main()
{
    float r;
    scanf("%f",&r);
    float ar=3.14*r*r;
    float cr=2*3.14*r;
    printf("Area=%f",ar);
    printf(", Circumference=%f",cr);
    return 0;
}