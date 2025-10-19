// Q32: Write a program to check if a number is a palindrome.

// Sample Test Cases:
// Input 1:
// 121
// Output 1:
// Palindrome

// Input 2:
// 123
// Output 2:
// Not palindrome

#include<stdio.h>
int main()
{
    int n;int orig;int rev=0;int rem;
    scanf("%d",&n);
    orig=n;
    while(n) 
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(orig==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}