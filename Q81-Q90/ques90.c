// Q90: Toggle case of each character in a string.

// Sample Test Cases:
// Input 1:
// Hello
// Output 1:
// hELLO

#include <stdio.h>
#include<string.h>
int main() 
{
    char str[1000];
    int i;
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++) 
    {
        if(str[i]>='a' && str[i]<='z') 
        {
            str[i]=str[i]-('a' - 'A');
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+('a' - 'A');
        }
        else
        {
            printf("Enter string only");
            return 1;
        }
    }
    printf("%s",str);
    return 0;
}