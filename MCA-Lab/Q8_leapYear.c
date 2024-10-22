/*
                                Program: 8
        Write a C program to check whether a given year is Leap year or not.
*/

#include<stdio.h>
void main()
{
    int year;
    printf("Enter the any year: ");
    scanf("%d",&year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d is a Leap year!",year);
    }else{
        printf("%d is a not Leap year!",year);
    }
}

/*
   Output:
   Enter the any year: 2000
   2000 is a Leap year!

   Enter the any year: 2000
   2000 is a Leap year!
*/