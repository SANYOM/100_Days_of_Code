// Q60: Count positive, negative, and zero elements in an array.

// Sample Test Cases:
// Input 1:
// 5
// -1 0 1 2 -2
// Output 1:
// Positive=2, Negative=2, Zero=1

#include<stdio.h>
int main()
{
    int n;int po=0;int ne=0;int ze=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            po++;
        }
        else if(arr[i]<0)
        {
            ne++;
        }
        else
        {
            ze++;
        }
    }
    printf("Positive=%d, Negative=%d, Zero=%d",po,ne,ze);
    return 0;
}