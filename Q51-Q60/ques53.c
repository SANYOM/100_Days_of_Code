// Q53: Write a program to print the following pattern:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

// Sample Test Cases:
// Input 1:

// Output 1:
// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *

#include<stdio.h>
int main()
{
    //inc. stars
    int nums[]={1,3,5,7,9};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<nums[i];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //dec. stars
    int arr[]={7,5,3,1};
    for(int k=0;k<4;k++)
    {
        for(int j=0;j<arr[k];j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}