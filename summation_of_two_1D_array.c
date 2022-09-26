#include<stdio.h>
int main()
{
    int i,n;
    printf("How many number do you want to store in per array?\n");
    scanf("%d",&n);
    int array_1[n];
    printf("array_1 value:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array_1[i]);
    }
    int array_2[n];
    printf("array_2 value:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array_2[i]);
    }
    int c[n];
    printf("Summation array result:");
    for(i=0; i<n; i++)
    {
        c[i]=array_1[i] + array_2[i] ;
        printf("%d ",c[i]);
    }
    return 0;
}
