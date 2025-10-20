// Q43: Write a program to check if a number is a strong number.

// Sample Test Cases:
// Input 1:
// 145
// Output 1:
// Strong number

// Input 2:
// 123
// Output 2:
// Not strong number

#include<stdio.h>
int main()
{
    int n;int ans=0;
    scanf("%d",&n);
    int cp=n;
    while(cp)
    {
        int r=cp%10;
        int res=1;
        for(int i=r;i>0;i--)
        {
            res*=i;
        }
        ans+=res;
        cp/=10;
    }
    if(ans==n)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }
    return 0;
}