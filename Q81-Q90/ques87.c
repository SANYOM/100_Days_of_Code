// Q87: Count spaces, digits, and special characters in a string.

// Sample Test Cases:
// Input 1:
// a b1&2
// Output 1:
// Spaces=1, Digits=2, Special=1

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;int spaces = 0;int digits=0;int special=0;
    scanf("%[^\n]", str);
    for(i=0;i<strlen(str);i++) 
    {
        if(str[i]==' ')
            spaces++;
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else if((str[i]<'A' || str[i]>'Z') && (str[i]<'a' || str[i]>'z'))
        {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d",spaces,digits,special);
    return 0;
}