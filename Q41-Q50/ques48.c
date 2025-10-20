// Q48: Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

// Sample Test Cases:
// Input 1:

// Output 1:
// 1
// 12
// 123
// 1234
// 12345

#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        int num=1;
        for(int j=0;j<i+1;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}