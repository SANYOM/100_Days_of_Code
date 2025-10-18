// Q5 (User Inputs, Operations & Output)
// Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    int c;
    scanf("%d",&c);
    int f=(c*(9.0/5))+32;
    printf("Fahrenheit=%d",f);
    return 0;
}