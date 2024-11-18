/*
                            program: 19
        Write a program to check whether a no is an Armstrong number.
*/
#include <stdio.h>
#include <math.h>
void main()
{
    int num, sum = 0,p, temp,k;
    double r, n=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    do
    {
        temp /= 10;
        n++;
    }while (temp !=0);

    k = num;
    
    while ( k != 0)
    {
        r = k % 10;
        p=pow(r, n);
        sum = sum + p;
        k=k/10;
        printf("%d  %f\n", sum, pow(r, n));
    }
    
    if (sum==num)
    {
        printf("%d is an Armstrong number.\n", sum);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", sum);
    }
}

/*
    Enter the number: 153
    27  27.000000
    151  125.000000
    152  1.000000
    152 is not an Armstrong number.
*/