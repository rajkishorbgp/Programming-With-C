/*

BUTTERFLY pattern
*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/
#include<stdio.h>
void main()
{
    int n=4;
    int p=n+2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        for (int k=0; k<p; k++ )
        {
           printf("  ");
        }
        for (int q = 0; q <= i; q++)
        {
            printf("* ");
        }
        p-=2;
        printf("\n");
    }
    p=0;
    for (int i = 0; i < n; i++)
    {
       for (int  j = 0; j < n-i; j++)
       {
        printf("* ");
       }
       for ( int q = 0; q < p; q++)
       {
        printf("  ",p);
       }
       for (int q = 0; q < n-i; q++)
        {
            printf("* ");
        }
       p+=2;
       printf("\n");
    }
}
