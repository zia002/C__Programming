/*Print prime number's in a user given range */
#include<stdio.h>
int main()
{
    int i,start,end;
    printf("Enter Fist Value:");
    scanf("%d",&start);
    printf("Enter Last Value:");
    scanf("%d",&end);
    for(start=start ; start<=end ; start=start++)
    {
        for(i=2; i<start; i=i++)
        {
            if(start%i==0)
            {
            goto next;
            }
            i=i+1;
        } 
        printf("%d \n",start);
        next:
        start=start+1;
    }
    getchar();
}