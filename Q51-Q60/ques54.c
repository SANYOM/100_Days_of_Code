// Q54: Write a program to print the following pattern:

//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

// Sample Test Cases:
// Input 1:

// Output 1:
// Pattern with layers of stars as shown.

#include<stdio.h>
int main()
{
    
    for(int i=0;i<4;i++)
    {
        //spaces
        for(int j=3;j>i;j--)
        {
            printf(" ");
        }
        //stars
        int num[]={1,3,5,7};
        for(int k=0;k<num[i];k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<3;i++)
    {
        //spaces
        for(int j=0;j<i+1;j++)
        {
            printf(" ");
        }
        int arr[]={5,3,1};
        //stars
        for(int k=0;k<arr[i];k++)
        {
            printf("*");
        }
        printf("\n");
    }
}