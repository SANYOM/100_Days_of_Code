// Q77: Check if the elements on the diagonal of a matrix are distinct.

// Sample Test Cases:
// Input 1:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 1
// Output 1:
// False

// Input 2:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Output 2:
// True

#include <stdio.h>
int main() 
{
    int r;int c;
    scanf("%d %d",&r,&c);
    int matrix[r][c];
    for (int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<r && i<c;i++) 
    {
        for(int j=i+1;j<r && j<c;j++) 
        {
            if(matrix[i][i] == matrix[j][j]) 
            {
                cnt++;
            }
        }
    }
    if(cnt==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}