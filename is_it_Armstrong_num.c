/*
Check :Is it Armstrong Number or?
Armstrong number is a number that is equal to the sum of cubes of its digits
*/
#include<stdio.h>
#include<math.h>
void main()
{
    int num,sum=0,rem,tem;
    printf("Enter Your number:");
    scanf("%d",&num);
    tem=num;
    do
    {
        rem=tem%10;
        sum=sum + pow(rem,3);
        tem=tem/10;
    }
    while(tem!=0);
    if(sum==num)
    {
        printf("It Is A Armstrong Number");
    }
    else
    {
        printf("not a Armstrong  number");
    }
}
