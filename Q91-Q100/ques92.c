// Q92: Find the first repeating lowercase alphabet in a string.

// Sample Test Cases:
// Input 1:
// stress
// Output 1:
// s

#include <stdio.h>
int main() 
{
    char str[100];
    int freq[26]={0};
    int i;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++) 
    {
        char ch=str[i];
        if(ch>='a' && ch<='z') 
        {
            freq[ch-'a']++;
            if(freq[ch-'a']==2) 
            {
                printf("%c", ch);
                return 0;
            }
        }
    }
}