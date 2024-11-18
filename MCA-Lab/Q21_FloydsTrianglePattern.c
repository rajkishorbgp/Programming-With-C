/*
                        Program: 21
        Write a program to print the Floyds triangle 
          1 
         2 3 
        4 5 6 
*/

#include<stdio.h>
void main()
{
    int n = 3,i,j,num=1,k;
    for ( i = 1; i <= n; i++)
    {
        for ( k = 1; k <= n-i; k++)
        {
            printf(" ");
        }
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        printf("\n");
    }  
}

/*
    Output:
      1 
     2 3 
    4 5 6 
*/