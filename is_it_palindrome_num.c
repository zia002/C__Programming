/*
Palindrome_______________Number:
Palindrome number is a number like 121 that remains the same when its digits are reversed
*/
#include<stdio.h>
void main()
{
    int num,sum=0,rem,tem;
    printf("Enter a number:");
    scanf("%d",&num);
    tem=num;
    while(tem!=0)
    {
        rem=tem % 10;     
        sum=sum*10+rem;
        tem=tem/10;
    }
    if(sum==num)
    printf("It is a Palindrome  Number");
    else
    printf("It is not a Palindrome Number");
    
}
