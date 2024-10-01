/*

            DIAMOND pattern
                 *
               * * *
             * * * * *
           * * * * * * *
           * * * * * * *
             * * * * *
               * * *
                 *
*/

#include<stdio.h>
void main()
{
    int n=4,p=1;
    for(int i=0; i<n; i++)
    {
        for (int j = n-1; j >i; j--)
        {
            printf("  ");
        }
        for (int j = 0; j < p; j++)
        {
            printf("* ");
        }
        p+=2;
        printf("\n");
    }
    p-=2;
    for(int i=0; i<n; i++)
    {
        for (int j =0; j<i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < p; j++)
        {
            printf("* ");
        }
        p-=2;
        printf("\n");
    }
}