/*
    HOLLOW RECTANGLE pattern
    *****
    *   *
    *   *
    *****
*/

#include<stdio.h>
void main()
{
    int n=4;
    for (int i = 1; i <= 4; i++)
    {
        for(int j=1; j<=n+1; j++)
        {
            if (i==2 && j==1 || i==2 && j==n+1 || i==3 && j==1 || i==3 && j==n+1 || i==1 || i == 4)
            {
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*
output:
* * * * * 
*       *
*       *
* * * * *

*/