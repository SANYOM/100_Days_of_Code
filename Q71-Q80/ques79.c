// Q79: Perform diagonal traversal of a matrix.

// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 1 2 4 7 5 3 6 8 9

#include <stdio.h>
int main() 
{
    int r;int c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int k=0;k<r+c-1;k++) 
    {
        for(int i=0;i<r;i++) 
        {
            int j=k-i;
            if(j>=0 && j<c)
            {
                printf("%d ",matrix[i][j]);
            }
        }
    }
    return 0;
}