/*
                            Program: 18
        Write a program to check a given number is prime or not.

*/

#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++)
    {
        if (num%i==0)
        {
            break;
        }
    }
    if (i==num/2+1)
    {
        printf("%d is a prime number!",num);
    }else
    {
        printf("%d is a not prime number!",num);
    }  
}

/*
    Output:
    Enter the number: 17
    17 is a prime number!
*/