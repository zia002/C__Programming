//GCD_____&_____LCM
#include<stdio.h>
void main()
{
    int num1,num2,rem,num,GCD,LCM;
    printf("Enter Your Two number:");
    scanf("%d %d",&num1,&num2);
    while(num2==0)
    {
    rem=num1%num2;
    num1=num2;
    num2=rem;
    }
    printf("GCD=%d \n",num2);
    LCM=(num1*num2)/num2;
    printf("LCM=%d",LCM);
}
