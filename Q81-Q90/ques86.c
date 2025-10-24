// Q86: Check if a string is a palindrome.

// Sample Test Cases:
// Input 1:
// madam
// Output 1:
// Palindrome

// Input 2:
// hello
// Output 2:
// Not palindrome

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;int isPalindrome = 1;
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str)/2;i++) 
    {
        if(str[i]!=str[strlen(str)-1-i]) 
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}