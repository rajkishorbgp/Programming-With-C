/*
INVERTED & ROTATED HALF-PYRAMID pattern

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include<stdio.h>
void main()
{
    int n=5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <n-1; j++)
        {
            printf("  ");
        }

        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        
        printf("\n");
    } 
}


/*
Output:

        * 
      * *
    * * *
  * * * *
* * * * *

*/