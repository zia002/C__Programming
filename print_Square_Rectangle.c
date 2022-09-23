/*
Print a shape.Enter row & column value.
this programme will print a shape side.
By this programme you can print
 **Square** & **Rectangle**
*/
#include<stdio.h>
void main()
{
    int r,c,row,column;
    printf("Enter Row & Column Number:");
    scanf("%d %d",&row,&column);
    for(r=1; r<=row; r++)
    {
        for(c=1; c<=column; c++)
        {
            if(r==1 || c==1 || r==row || c==column )
            {
                printf("★ ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
