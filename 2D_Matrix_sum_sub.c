/*
2D matrix(r×c),user will input value for Matrix A & B.
and this programme will print summation & substraction of matrix A & B..
*/
#include<stdio.h>
void main()
{   //defining the row and coloum number:
    int j,i,r,c;
    printf("Enter The Numbers Of Rows & Columscann:");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],d[r][c];
    //input value for matrix A:
    printf("For A matrix Enter your value:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //printing matrix A:
    printf("A Matrix is:       \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //input value for matrix B:
    printf("For B matrix Enter your value:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //printing matrix B:
    printf("B Matrix is:       \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Summation Of Matrix A & B:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c;j++)
        {
            d[i][j]=a[i][j] + b[i][j] ;
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }

    printf("Substraction Of Matrix A & B:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c;j++)
        {
            d[i][j]=a[i][j] - b[i][j] ;
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}