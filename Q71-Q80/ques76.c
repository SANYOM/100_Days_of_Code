// Q76: Check if a matrix is symmetric.

// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 2 1
// Output 1:
// True

// Input 2:
// 2 2
// 1 0
// 2 1
// Output 2:
// False

#include<stdio.h>
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
    int cnt=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matrix[i][j]!=matrix[j][i])
            {
                cnt++;
            }
        }
    }
    if(cnt!=0 || r!=c)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;   
}
