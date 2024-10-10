/*
                        Program: 4
        Write a program to swap the values of two variables.

*/

#include<stdio.h>
void main()
{
    int a,b,c;

    printf("Enter two number a and b: ");
    scanf("%d%d",&a,&b);
    printf("Before swap value a = %d and b= %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap value a = %d and b= %d\n",a,b);

}

/*
    Output:
    Enter two number a and b: 10 20
    Before swap value a = 10 and b= 20
    After swap value a = 20 and b= 10

*/