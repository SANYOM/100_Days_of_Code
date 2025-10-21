// Q57: Find the sum of array elements.

// Sample Test Cases:
// Input 1:
// 4
// 2 4 6 8
// Output 1:
// 20

// Input 2:
// 3
// 1 1 1
// Output 2:
// 3

#include<stdio.h>
int main()
{
    int n;int ans=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ans+=arr[i];
    }
    printf("%d ",ans);
    return 0;
}