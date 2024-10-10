/*
                    Program: 1
        Write a C program to sum two numbers.

*/

#include<stdio.h>
void main()
{
    int a,b,sum;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("%d+%d = %d",a,b,sum);
}

/*
    Output:
    Enter two number: 20 30
    20+30 = 50
*/