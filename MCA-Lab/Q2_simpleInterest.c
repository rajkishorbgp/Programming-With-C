/*
                       Prigram: 2
        Write a C program to calculate simple interest.

*/

#include<stdio.h>
void main()
{
    float principal, rate, time, interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest is: %.2f\n", interest);

}


/*
    Output:
    Enter principal amount: 200 
    Enter interest rate: 10
    Enter time period (in years): 2
    Simple Interest is: 40.00
*/