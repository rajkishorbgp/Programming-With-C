/*
                        Prpgram: 9
        Write a C program to check equality of two numbers.
*/

#include<stdio.h>
void main()
{
    int num1,num2;
    printf("Enter the any two number: ");
    scanf("%d",&num1,&num2);
    if (num1 == num2)
    {
        printf("Given number is equality!");
    }else{
        printf("Given number is not equality!");
    }
}

/*
    Output:
    Enter the any two number: 100 101
    Given number is not equality!
*/