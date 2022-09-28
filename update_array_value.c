/*
update an array with new value:
*/
#include<stdio.h>
int main()
{
    int e,n,i,array[10]= {0,1,2,3,6,5,6,7,8,9};
    for(i=0; i<10; i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
again:
    printf("Which element do you want to change?\n");
    printf("Enter Array Index number:");
    scanf("%d",&n);
    printf("Enter your value:");
    scanf("%d",&array[n]);
    for(i=0; i<10; i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    printf("Do you want to change more value?:\n if, yes type 1.\nor\ntype 0 to exit\n");
    scanf("%d",&e);
    if(e==1)
    {
        goto again;
    }
    else
    {
        goto exit;
    }
exit:
    return 0;
}