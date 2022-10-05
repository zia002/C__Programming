/*
Print array value,and their hexadecimal Address using Pointer..
*/
#include<stdio.h>
int main()
{
    int i,arr[10]={5,2,3,6,10,7,9,1,9,3};
    int*pointer=&arr;
    printf("Array Value and Address Is:\n");
    for(i=0;i<10;i++)
    {
    printf("value:%d ",*pointer);
    printf("Address:%x ",pointer);
    printf("\n");
    pointer=pointer+1;
    }   
    return 0;
}