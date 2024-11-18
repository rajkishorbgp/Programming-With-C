/*
                            program: 23
    Write a program to print the following pattern (take number of lines as input from the user). 
    * * * 
    * * 
    * 
*/

#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the num of line: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for ( j = n-i; j >=0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}

/*
    Output:
    Enter the num of line: 3
    * * *
    * *
    *
*/