/*
Strong____Number:
*/
#include<stdio.h>
void main()
{
    int num,sum=0,rem,fact,tem,i;
    printf("Enter a number:");
    scanf("%d",&num);
    tem=num;
    while(tem!=0)
    {
        rem=tem % 10;
        fact=1;
        for(i=1; i<=rem; i++)
        {   
        fact=fact*i;
        }
        sum=sum+fact;
        tem=tem/10;
    }
    if(sum==num)
    printf("It is a strong Number");
    else
    printf("It is not a strong Number");
    
}
