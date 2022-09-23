/*
by using this programme, you can store number as you wish.
and this programme will show the maximum and
minimum value.
*/
#include<stdio.h>
void main()
{
    int min,max,n,i;
    //getting the value:
    printf("How many numbers do you want to store?:");
    scanf("%d",&n);
    int array[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    //finding the maximaum value:
    max=array[0];
    for(i=1; i<n; i++)
    {
        array[i];
        if(max<array[i])
        max=array[i];
    }
    printf("Maximum Value is=%d\n",max);   
    //finding the minimum value:
    min=array[0];
    for(i=1; i<n; i++)
    {
        array[i];
        if(min>array[i])
        min=array[i];
    }
    printf("Minimum Value is=%d",min);   
}