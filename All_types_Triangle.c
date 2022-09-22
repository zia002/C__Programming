/*_____________________
Increasing____triangle:
_______________________
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter The number Of row:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
         printf("★");
        }
        printf("\n");
    }
    
printf("\n \n \n");
printf("____Decreasing____triangle___Code");
printf("\n \n \n");
/*
______________________
Decreasing____triangle
_______________________
*/


/* 
   int i,j,n;
   printf("Enter The number Of row:");
   scanf("%d",&n);
*/
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
         printf("★");
        }
        printf("\n");
    }
printf("\n \n \n");
printf("____Left___Sided___increasing__triangle___Code");
printf("\n \n \n");
/*
New________Code:
_______________________
Left___Sided___increasing__triangle:
_______________________
*/
/*  int i,j,n;
    printf("Enter The number Of row:");
    scanf("%d",&n);
*/
    for(i=1; i<=n; i++)
    {
        for(j=n; j>=i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
            printf("★");
        printf("\n");
    }
printf("\n \n \n");
printf("____Left___sided___Decreasing ___Triangle___Code");
printf("\n \n \n");
/*
New________Code:
_______________________
Left___sided___Decreasing ___Triangle
_______________________
*/

/*
    int i,n,j;
    printf("Enter The Number Of Row:");
    scanf("%d",&n);
*/  
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=n; j>=i; j--)
        {
            printf("★");
        }
        printf("\n");
    }
}