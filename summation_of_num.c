/*
Here,this programme will show you,summation of a number..
*/
#include<stdio.h>
void main()
{
    int num,sum=0,rem,tem;
    printf("Enter Your number:");
    scanf("%d",&num);
    tem=num;
    do
    {
    rem=tem%10;
    sum=sum+rem;
    tem=tem/10;
    }
    while(tem!=0);
    printf("Sum of these Number:%d",sum);
}
