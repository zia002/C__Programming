/*
Print________Z
*/
#include<stdio.h>
void main()
{
    int r,c,n,k;
    printf("Enter a number that will print in Z Diagonal :");
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            k=r+c;
            if(r==1 || k==n+1 || r==n  )
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