// Q30: Write a program to reverse a given number.

// Sample Test Cases:
// Input 1:
// 1234
// Output 1:
// 4321

// Input 2:
// 100
// Output 2:
// 1

#include<stdio.h>
int main()
{
    int n;int r=0;
    scanf("%d",&n);
    while(n)
    {
        int dig=n%10;
        r=r*10 + dig;
        n/=10;
    }
    printf("%d",r);
    return 0;
}