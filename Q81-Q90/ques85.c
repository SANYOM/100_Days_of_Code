// Q85: Reverse a string.

// Sample Test Cases:
// Input 1:
// abcd
// Output 1:
// dcba

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;
    scanf("%[^\n]", str);
    for(i=strlen(str)-1;i>=0;i--) 
    {
        printf("%c", str[i]);
    }
    return 0;
}