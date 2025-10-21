// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

// Sample Test Cases:
// Input 1:

// Output 1:
//     5
//    45
//   345
//  2345
// 12345

#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        int num=5;
        //spaces
        for(int j=4;j>i;j--)
        {
            printf(" ");
        }
        //numbers
        for(int k=num-i;k<=num;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}