// Q97: Print the initials of a name.

// Sample Test Cases:
// Input 1:
// John Doe
// Output 1:
// J.D.

#include <stdio.h>
int main() 
{
    char ch;
    int isStart = 1;
    while((ch=getchar())!='\n') 
    {
        if(isStart && ch!=' ') 
        {
            printf("%c.",ch);
            isStart=0;
        }
        if(ch==' ') 
        {
            isStart=1;
        }
    }
    return 0;
}