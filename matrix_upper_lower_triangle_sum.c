//Print____out___summation___of___upper__&__lower__triangele:
#include<stdio.h>
int main()
{
    int n,i,j,sumlow=0,sumup=0;
    printf("enter n×n matrix value value of n:");
    scanf("%d",&n);
    
    //input____________Matrix____________value:
    
    int array[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        printf("a[%d][%d]=",i,j);
        scanf("%d",&array[i][j]);
        }
    }
    
    //print___________the_____________matrix:
    
    printf("Matrix:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
        printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j)
            {
             sumlow=sumlow+array[i][j];
            }
            if(j>i)
            {
            sumup=sumup+array[i][j];
            }
        }
    }
    
    //print______the_____summation:
    
    printf("Summation of upper Triangle:%d\n",sumup);
    printf("Summation of lower Triangle:%d",sumlow);
    return 0;
}
