/*
                                       Program : 6
    Write a program to compute the addition, subtraction, product, quotient and remainder of two given numbers.
*/

#include <stdio.h>

int main() {
    int num1, num2;
    int addition, subtraction, product, remainder;
    float quotient;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
        remainder = num1 % num2;
    } else {
        printf("Division by zero is undefined!\n");
    }
    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n",quotient);
    printf("Remainder: %d\n",remainder);
    return 0;
}

/*
    Output:
    Enter the first number: 5
    Enter the second number: 3
    Addition: 8
    Subtraction: 2
    Product: 15
    Quotient: 1.666667
    Remainder: 2

*/