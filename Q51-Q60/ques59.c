// Q59: Count even and odd numbers in an array.

// Sample Test Cases:
// Input 1:
// 6
// 1 2 3 4 5 6
// Output 1:
// Even=3, Odd=3

// Input 2:
// 4
// 2 4 6 8
// Output 2:
// Even=4, Odd=0

#include<stdio.h>
int main()
{
    int n;int ev=0;int od=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ev++;
        }
        else
        {
            od++;
        }
    }
    printf("Even=%d, Odd=%d",ev,od);
    return 0;
}