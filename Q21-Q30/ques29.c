// Q29: Write a program to calculate the factorial of a number.

// Sample Test Cases:
// Input 1:
// 5
// Output 1:
// 120

// Input 2:
// 3
// Output 2:
// 6

#include<stdio.h>
int main()
{
    int n;int f=1;
    scanf("%d",&n);
    while(n)
    {
        f*=n;
        n--;
    }
    printf("%d",f);
    return 0;
}