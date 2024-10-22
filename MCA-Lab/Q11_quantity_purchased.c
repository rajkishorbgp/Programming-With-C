/*
                                Program: 11
    Write a program to compute net amount from the given quantity purchased and rate per quantity. Discount 
    of 10 is allowed if quantity purchased exceeds 100.
*/

#include<stdio.h>
void main()
{
    int amount;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    if (amount>100)
    {
        amount-=(amount *10)/100;
    }  
    printf("amount: %d",amount);
}

/*
    Output:
    Enter the amount: 500
    amount: 450
*/