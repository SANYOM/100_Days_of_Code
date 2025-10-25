// Q94: Find the longest word in a sentence.

// Sample Test Cases:
// Input 1:
// I love programming
// Output 1:
// programming

#include <stdio.h>
#include <string.h>
int main() 
{
    char word[50];char longest[50];
    int maxLen=0;
    while(scanf("%s", word)==1) 
    {
        int len=strlen(word);
        if(len>maxLen) 
        {
            maxLen=len;
            strcpy(longest,word);
        }
    }
    printf("%s", longest);
    return 0;
}