// Q33: Write a program to check if a number is an Armstrong number.

// Sample Test Cases:
// Input 1:
// 153
// Output 1:
// Armstrong

// Input 2:
// 123
// Output 2:
// Not Armstrong

#include<stdio.h>
int power(int,int);
int power(int base, int exp) 
{
    int result=1;
    while(exp--) 
    {
        result*=base;
    }
    return result;
}
int main()
{
    int n;int len=0;int cp;int ans=0;int check;
    scanf("%d",&n);
    cp=n;
    check=n;
    while(n)
    {
        n/=10;
        len++;
    }
    while(cp)
    {
        int r=cp%10;
        ans+=power(r,len);
        cp/=10;
    }
    if(check==ans)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}