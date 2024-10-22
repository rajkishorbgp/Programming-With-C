/*
                            Program: 7
        Write a C program to check whether a given number is even or odd.
*/

#include<stdio.h>
void main()
{
    int num;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is an even number!",num);
    }else{
        printf("%d is an odd number!",num);
    }
}

/*
    Output:
    Enter any integer number: 25
    25 is an odd number!
*/