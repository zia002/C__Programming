//Fibonacci_________series:
//0 1 1 2 3 5 8.......
#include<stdio.h>
#include<math.h>
int main()
{
    int fibo,count,first=0,second=1,n;
    printf("How Many Fibonacci number want to print?");
    scanf("%d",&n);
    for(count=0; count<n; count=count++)
    {
        if(count<=1)
        {
            fibo=count;
            printf("%d ",fibo);
        }
        else
        {
            fibo=(first+second);
            first=second;
            second=fibo;
            printf("%d ",fibo);
        }
        count=count+1;
    }
    return 0;
}