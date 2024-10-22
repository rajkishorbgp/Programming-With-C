/*
                        Program: 15
    Write a program to print the sum of digit of a given number.
*/
#include<stdio.h>
void main()
{
    int num,i,r,sum = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num)
    {
        r = num % 10;
        num/=10;
        sum+=r;
    }
    printf("Sum of digit is : %d",sum);
}

/*
    Output:
    Enter the number: 124
    Sum of digit is : 7
*/