// Q69: Find the second largest element in an array.

// Sample Test Cases:
// Input 1:
// 5
// 10 20 30 40 50
// Output 1:
// 40

#include <stdio.h>
int main() 
{
    int n;int fmax=0;int smax=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
        if(fmax<arr[i])
        {
            smax=fmax;
            fmax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}