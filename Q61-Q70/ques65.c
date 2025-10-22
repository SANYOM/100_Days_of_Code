// Q65: Search in a sorted array using binary search.

// Sample Test Cases:
// Input 1:
// 5
// 1 3 5 7 9
// 7
// Output 1:
// Found at index 3

// Input 2:
// 5
// 1 3 5 7 9
// 6
// Output 2:
// -1

#include<stdio.h>
int main()
{
    int n;int ans=-1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int tar;
    scanf("%d",&tar);
    int lo=0;
    int hi=n-1;
    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]>tar)
        {
            hi--;
        }
        else if(arr[mid]<tar)
        {
            lo++;
        }
        else
        {
            ans=mid;
            break;
        }
    }
    if(ans!=-1)
    {
        printf("Found at index %d",ans);
    }
    else
    {
        printf("%d",ans);
    }
    return 0;
}