// Q62: Reverse an array without taking extra space.

// Sample Test Cases:
// Input 1:
// 4
// 1 2 3 4
// Output 1:
// 4 3 2 1

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int lo=0;
    int hi=n-1;
    while(lo<hi)
    {
        int temp=arr[lo];
        arr[lo]=arr[hi];
        arr[hi]=temp;
        lo++;
        hi--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}