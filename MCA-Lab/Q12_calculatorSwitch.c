/*
                            Program: 12
    Write a C program to design calculator using case switch construct.
 */


#include<stdio.h>
#include<stdlib.h>
void main()
{
    int op;
    float a,b;
    printf("Welcome to my calculater.\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    
    printf("Pleate choose the Option: ");
    scanf("%d",&op);
    if (op != 5)
    {
        printf("Enter any two Number a and b: ");
        scanf("%f%f",&a,&b);
    }
    switch (op)
    {
    case 1:{
        printf("%.2f + %.2f = %.2f",a,b,a+b);
        break;
    }
    case 2:{
        printf("%.2f - %.2f = %.2f",a,b,a-b);
        break;
    }
    case 3:{
        printf("%.2f * %.2f = %.2f",a,b,a*b);
        break;
    }
    case 4:{
        printf("%.2f / %.2f = %.2f",a,b,a/b);
        break;
    }
    case 5:{
        printf("Exit");
        exit(0);
        break;
    }default:
        printf("Please choose the currect option!.");
        break;
    }
}

/*
   Output:
    Welcome to my calculater.
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
    Pleate choose the Option: 2
    Enter any two Number a and b: 50.20   40.50
    50.20 - 40.50 = 9.70
    PS D:\Git\C Programming Language> cd "d:\Git\C Programming Language\" ; if ($?) { gcc Q12_calculatorSwitch.c -o Q12_calculatorSwitch } ; if ($?) { .\Q12_calculatorSwitch }
    Welcome to my calculater.
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exit
    Pleate choose the Option: 5
    Exit


*/