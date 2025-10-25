// Q98: Print initials of a name with the surname displayed in full.

// Sample Test Cases:
// Input 1:
// John David Doe
// Output 1:
// J.D. Doe

#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    scanf(" %[^\n]", name);
    int i = 0, start = 0, spaceCount = 0;
    while(name[i]!='\0') 
    {
        if(name[i] == ' ') spaceCount++;
        i++;
    }
    i = 0;
    int printed = 0;
    while(name[i]!='\0') 
    {
        if(printed < spaceCount && (i==0 || name[i-1]==' ')) 
        {
            printf("%c.", name[i]);
            printed++;
        }
        i++;
    }
    i=strlen(name)-1;
    while(i>=0 && name[i]!=' ') i--;
    printf(" %s",&name[i + 1]);
    return 0;
}