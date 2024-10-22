/*
                    Program: 14
    Write a C program to print table of given number.
*/
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d = %d\n",num,i,num*i);
    } 
}

/*
    Output:
    Enter the number: 10
    10X1 = 10
    10X2 = 20
    10X3 = 30
    10X4 = 40
    10X5 = 50
    10X6 = 60
    10X7 = 70
    10X8 = 80
    10X9 = 90
    10X10 = 100
*/