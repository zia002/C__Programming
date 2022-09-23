/*
Print________N
*/
#include<stdio.h>
void main()
{
    int r,c,n;
    printf("Enter a number that will print in N Diagonal :");
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            if(c==1 || r==c || c==n )
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