/*
                        Program: 17
    Write a program to print the prime numbers within a given number.
*/

#include<stdio.h>
void main()
{
    int num,i,j;
    printf("Enter the number: ");
    scanf("%d",&num);

    for ( i = 2; i < num; i++)
    {
       for ( j = 2; j <= i/2; j++)
       {
            if (i%j==0)
            {
                break;
            }
       }
       if (j==i/2+1)
       {
        printf("%d ",i);
       }  
    }
}

/*
    Output:
    Enter the number: 100
    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/