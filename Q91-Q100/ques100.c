// Q100: Print all sub-strings of a string.

// Sample Test Cases:
// Input 1:
// abc
// Output 1:
// a,ab,abc,b,bc,c

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    scanf("%s", str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++) 
        {
            for(int k=i;k<=j;k++) 
            {
                printf("%c",str[k]);
            }
            printf(",");
        }
    }
    return 0;
}