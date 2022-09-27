/*
here,user will input matrix A value,and this
programme will print out transpose of matrix A.
*/
#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("how many rows in matrix A?\n");
    scanf("%d",&r);
    printf("how many column in matrix A?\n");
    scanf("%d",&c);
    int a[r][c],b[c][r];
    printf("Enter matrix A value:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix A:\n"); 
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Of matrix A:\n");
    for(i=0; i<c; i++)
    {
        for(j=0; j<r; j++)
        {
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}