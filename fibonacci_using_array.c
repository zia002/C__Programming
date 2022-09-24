// 0 1 1 2 3 5 8.......n
/*
Fibonacci Series Using Array
*/
#include<stdio.h>
void main()
{
    int i, n;
    printf("Enter How Many Fibonacci  Number Do you Want:");
    scanf("%d",&n);
    int array[i];
    array[0]=0;
    array[1]=1;
    for(i=2; i<n; i++)
    {
     array[i]=array[i-2]+array[i-1];
    }
    for(i=0;i<n;i++)
    {
    printf("%d\n",array[i]);
    }
    
}