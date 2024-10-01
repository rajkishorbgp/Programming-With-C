/*
     INVERTED HALF-PYRAMID with Numbers pattern

     1 2 3 4 5
     1 2 3 4 
     1 2 3 
     1 2
     1

*/

#include<stdio.h>
void main()
{
    int n=5;
    for (int i = 0; i < n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}