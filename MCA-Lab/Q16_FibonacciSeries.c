/*
                        Program: 16
    Write program to print the Fibonacci series up to a given number.
*/
#include<stdio.h>
void main()
{
    int num,i,a,b,sum;
    a=0;
    b=1;
    sum=0;
    printf("Enter number you want to print in the fibonacci series: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        printf("%d ",sum);
        a=b;
        b=sum;
        sum = a+b;
    }
}

/*
    Output:
    Enter number you want to print in the fibonacci series: 10
    0 1 1 2 3 5 8 13 21 34
*/