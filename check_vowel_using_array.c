#include<stdio.h>
int main()
{
    int i,n;
    char array[10]= {'a','e','i','o','u','A','E','I','O','U'};
     printf("Enter Your letter:");
    scanf("%c",&n);
    for(i=0;i<10; i++)
    {
        if(n==array[i])
        {
            printf("Yes! it is vowel");
            goto exit;
        }
    }
    printf("No! it is consonant ");
    exit:{}
    return 0;
}