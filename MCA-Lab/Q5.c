/*
                                    Program: 5
    Write a program to convert temperature from degree centigrade to Fahrenheit. °F = °C*9/5+32
*/

#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("%.2fC is equal to %.2fF\n", c, f);

}

/*
    Output:
    Enter temperature in Celsius: 20
    20.00C is equal to 68.00F
*/