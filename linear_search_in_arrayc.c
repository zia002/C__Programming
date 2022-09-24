/*
Linear searching in a array.
*/
#include<stdio.h>
void main()
{
    int var,i,n,array[10]= {10,12,14,15,20,33,80,89,40,45};
    printf("Enter Your Value:");
    scanf("%d",&n);
    for(i=0; i<10; i++)
    {
        var=array[i];
        if(var==n)
        {
        printf("Yes! Your value Exist\n");
        printf("value Exist in array index %d",i);
        goto end;
        }    
    }
    printf("Your value Don't Exist");
    end:{}
}