// Q88: Replace spaces with hyphens in a string.

// Sample Test Cases:
// Input 1:
// hello world
// Output 1:
// hello-world

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;
    scanf("%[^\n]", str);
    for(i=0;i<strlen(str);i++) 
    {
        if(str[i]==' ')
        {
            str[i]='-';
        }
    }
    for(i=0;i<strlen(str);i++) 
    {
        printf("%c", str[i]);
    }
    return 0;
}