#include<stdio.h>
int main()
{
    int i,n;
    printf("How many number want to store?");
    scanf("%d",&n);
    int array[n],revarray[n];
    printf("Enter Array value:");
    for(i=0; i<n; i++)
    {
    scanf("%d",&array[i]);   
    }
    
//____reverse___the__array:

printf("Reverse Array:");
    for(i=0; i<n; i++)
    {
        revarray[n-i]=array[i];
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ",revarray[i]);
    }
    return 0;
}
