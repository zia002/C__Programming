/* 
2D matrix(3×3),user will input value,and this programme 
will print the Matrix..
*/
#include<stdio.h>
void main()
{
    int j,i,a[3][3],b[3][3];
    printf("For A matrix Enter your value:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("A Matrix is:   \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }  
    printf("For B matrix Enter your value:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("B Matrix is:   \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
        printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
}