// Q83: Count vowels and consonants in a string.

// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[1000];
    int i;int vow=0;int con=0;
    scanf("%[^\n]",str);
    for(i=0;i<strlen(str);i++) 
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vow++;
        }
        else
        {
            con++;
        }
    }
    printf("Vowels=%d, Consonants=%d",vow,con);
    return 0;
}