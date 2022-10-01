#include<stdio.h>
int main()
{
fun();
}
int fun()
{
    int x,y,r=1,i;
    printf("Enter Base Value,X:");
    scanf("%d",&x);
    printf("Enter Power Value,Y:");
    scanf("%d",&y);
    for(i=1; i<=y; i++)
    {
    r=r*x;
    }
    printf("X^Y=%d",r);
}