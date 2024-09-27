/*           
             Program: 1
   Write a program to print star pattern
   
   *
   * *
   * * *
   * * * *
   * * * * *
*/

#include<stdio.h>
void main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
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