// Q78: Find the sum of main diagonal elements for a square matrix.

// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 15

#include<stdio.h>
int main()
{
    int r;int c;int ans=0;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(i==j)
            {
                ans+=matrix[i][j];
            }
        }
    }
    printf("%d ",ans);
    return 0;   
}
