/*
This is a user define array,where a user can store number.
and this programme will find out the even and odd value.
and also print how many even & odd numbers in the array. 
*/
#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("how many numbers do you want to store:");
    scanf("%d",&n);
    int array[n];
    printf("Array values are:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Even Values are:");
    for(i=0; i<n; i++)
    {
        if(array[i]%2==0)
        {
        printf("%d ",array[i]);
        count=count+1;
        }
    }
    printf("\nThere are Even numbers:%d",count);
    printf("\nOdd Values are:");
    int countt=0;
    for(i=0; i<n; i++)
    {
        if(array[i]%2!=0)
        {
        printf("%d ",array[i]);
        countt=countt+1;
        }
    }
    printf("\nThere are Odd numbers:%d",countt);
    return 0;
}