/*
Print_____A_____Equiangular Triangle
*/
#include<stdio.h>
void main()
{
    int r,c,n;
    printf("Enter Triangle row number:");
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            if(r==n || c==1 || r==c )
            {
                printf("★");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}