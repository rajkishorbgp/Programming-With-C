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

    for ( i = 1; i < num; i++)
    {
        for ( j = 2; j < i/2; j++)
        {
            if (i%j==0)
            {
                break;
            }
        }
        if ()
        {
            
        }
        
        printf("%d",num);
    }
}