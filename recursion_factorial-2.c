/*
Factorial using indirect recursion.
*/
#include<stdio.h>
int fun(int n)
{
    if(n==1)
        return n;
    else
        return n*fun1(n-1);
}
int fun1(int n)
{
    if(n==1)
        return n;
    else
        return n*fun(n-1);
}
int main()
{   int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("factorial of %d=%d",n,fun(n));
    return 0;
}