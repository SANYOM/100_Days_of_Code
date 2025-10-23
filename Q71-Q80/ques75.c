// Q75: Add two matrices.

// Sample Test Cases:
// Input 1:
// 2 2
// 1 2
// 3 4
// 2 2
// 5 6
// 7 8
// Output 1:
// 6 8
// 10 12

#include<stdio.h>
int main()
{
    int r1;int c1;
    scanf("%d %d",&r1,&c1);
    int matrix1[r1][c1];
    int sum[r1][c1];
    for(int i=0;i<r1;i++)
    {       
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }

    int r2;int c2;
    scanf("%d %d",&r2,&c2);
    int matrix2[r2][c2];
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        for(int i=0;i<r1;i++) 
        {
            for(int j=0;j<c1;j++) 
            {
                sum[i][j]=matrix1[i][j]+matrix2[i][j];
                printf("%d ", sum[i][j]);
            }
            printf("\n");
        }   
    }
    else
    {
        printf("Dimensions doesn't match");
    }
    return 0;
}
