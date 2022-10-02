/*
User input a number n,this programme will print out 
n to 1 and reverse this from 1 to n.
intput:3
output:321123
*/
#include<stdio.h>
int var(int x)
{
    if(x<1)
    {
        return 0;
    }
    else
    {
        printf("%d",x);
        var(x-1);
        printf("%d",x);
    }
}
int main()
{   int x;
    printf("Enter last value:");
    scanf("%d",&x);
    var(x);
    return 0;
}