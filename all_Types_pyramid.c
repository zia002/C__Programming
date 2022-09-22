/*
______________________________

_____________Pyramid__________
______________________________
*/
#include<stdio.h>
void main()
{
    int i,j,r;
    printf("Enter The Number's Of Row's:");
    scanf("%d",&r);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=(r-i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1) ; j++)
        {
            printf("★");
        }
        printf("\n");
    }

    printf("\n \n \n");
    printf("____Pyramid______with_______spaces___:");
    printf("\n \n \n");

    /*
    ______________________________

    Pyramid______with_______spaces:
    _______________________________
    */

    /*
    #include<stdio.h>
    void main()
    {
        int i,j,r,k;
        printf("Enter The Number's Of Row's:");
        scanf("%d",&r);

    */
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=(r-i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            {
                printf("★ ");
            }
        }
        printf("\n");
    }

    printf("\n \n \n");
    printf("____Flip__________Up____________Pyramid____:");
    printf("\n \n \n");

    /*
    _______________________________
    Flip__________Up____________Pyramid:
    _______________________________
    */
    /*
    #include<stdio.h>
    void main()
    {
        int i,j,r;
        printf("Enter The Number's Of Row's:");
        scanf("%d",&r);
    */
    for(i=r; i>=1; i--)
    {
        for(j=1; j<=(r-i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            {
                printf("★");
            }
        }
        printf("\n");
    }

    printf("\n \n \n");
    printf("____Flip__Up___Pyramid__with__spaces____:");
    printf("\n \n \n");

    /*
    ____________________________________
    Flip__Up___Pyramid__with__spaces:
    ____________________________________
    */
    /*
    #include<stdio.h>
    void main()
    {
        int i,j,r;
        printf("Enter The Number's Of Row's:");
        scanf("%d",&r);
    */
    for(i=r; i>=1; i--)
    {
        for(j=1; j<=(r-i); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            {
                printf("★ ");
            }
        }
        printf("\n");
    }


    printf("\n \n \n");
    printf("____Pyramid__&__Flip__Up_Pyramid____:");
    printf("\n \n \n");

    /*
    ___________________________________
    Pyramid__&__Flip__Up_Pyramid__:
    ____________________________________
    */
    /*
    #include<stdio.h>
    void main()
    {
        int i,j,r;
        printf("Enter The Number's Of Row's:");
        scanf("%d",&r);
    */
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=(r-i); j++)
        {
            printf(" ");

        }
        for(j=1; j<=(2*i - 1); j++)
        {
            printf("★");
        }
        printf("\n");
    }
    for(i=(r-1); i>=1; i--)
    {   for(j=1; j<=r-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("★");
        }
        printf("\n");
    }

}