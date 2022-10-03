/*
print 1 to N natural number using recursion.
without using loops.
*/
#include<stdio.h>
int rec(int n)
{
if(n==0)
{
return n;
}
rec(n-1);
printf("%d ",n);
}
int main()
{   
    int n;
    printf("Enter Last value:");
    scanf("%d",&n);
    rec(n);
    return 0;
}