/*
here,user will input (n×n) matrix A values,and this
programme will print out summation of row & column values.. A.
*/
#include<stdio.h>
int main()
{
    int i,j,n,row=0,col=0;
    printf("Enter row or column number of matrix A:\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter matrix A value:\n");

    //input_the_values:

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //print__the__matrix:

    printf("Matrix A:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //print__summation__of__row_column:
        for(i=0; i<n; i++)
        {
            row=0;
            col=0;
            for(j=0; j<n; j++)
            {
                row=row+a[i][j];
                col=col+a[j][i];
            }
            printf("sum of row:%d=%d\n",i+1,row);
            printf("sum of column:%d=%d\n",i+1,col);
        }  
    return 0;
}