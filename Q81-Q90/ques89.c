// Q89: Count frequency of a given character in a string.

// Sample Test Cases:
// Input 1:
// programming
// g
// Output 1:
// 2

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;int cnt=0;
    scanf("%[^\n]",str);
    char ch;
    scanf(" %c",&ch);
    for(i=0;i<strlen(str);i++) 
    {
        if(str[i]==ch)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}