// Q81: Count characters in a string without using built-in length functions.

// Sample Test Cases:
// Input 1:
// Hello
// Output 1:
// 5

// Input 2:
 
// Output 2:
// 1

#include <stdio.h>
int main() 
{
    char ch;
    int count = 0;
    while((ch=getchar())!='\n') 
    {
        count++;
    }
    printf("%d",count);
    return 0;
}