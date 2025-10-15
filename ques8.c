// Q8 (User Inputs, Operations & Output)
// Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n)
    {
        ans+=n;
        n--;
    }
    printf("Sum=%d",ans);
    return 0;
}