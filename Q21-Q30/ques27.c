// Q27: Write a program to print the sum of the first n odd numbers.

// Sample Test Cases:
// Input 1:
// 3
// Output 1:
// 9

// Input 2:
// 5
// Output 2:
// 25

#include<stdio.h>
int main()
{
    int n;int num=1;int ans=0;
    scanf("%d",&n);
    while(n)
    {
        ans+=num;
        num+=2;
        n--;
    }
    printf("%d",ans);
    return 0;
}