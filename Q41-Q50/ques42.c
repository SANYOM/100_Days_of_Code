// Q42: Write a program to check if a number is a perfect number.

// Sample Test Cases:
// Input 1:
// 6
// Output 1:
// Perfect number

// Input 2:
// 10
// Output 2:
// Not perfect number

#include<stdio.h>
int main()
{
    int n;int ans=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            ans+=i;
        }
    }
    if(ans==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not perfect number");
    }
    return 0;
}