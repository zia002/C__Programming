/*
Print_____letter_____X
*/
#include<stdio.h>
void main()
{
    int r,c,n,k;
    printf("Enter a number that will print in X Diagonal :");
    scanf("%d",&n);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n; c++)
        {
            k=r+c;
            if(r==c || k==n+1  )
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