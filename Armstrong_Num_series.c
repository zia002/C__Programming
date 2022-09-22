//____Armstrong__Number__Series:
#include<stdio.h>
#include<math.h>
int main()
{
    int num,rem,tem,i;
    printf("Enter Last Number Of The Range:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        tem=i;
        int sum=0;
        while(tem!=0)
        {
            rem=tem%10;
            sum=sum + pow(rem,3);
            tem=tem/10;
        }
        if(sum==i)
        {
            printf("%d \n",i);
        }
    }
}
    