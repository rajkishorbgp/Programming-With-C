/*
                         program 10
Write a C program to compare three numbers and print the greatest number.
*/

#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("Enter the three number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
   
    if (num1>num2)
    {
        if (num1>num3)
        {
           printf("%d is a greatest number",num1); 
        }else
        {
            printf("%d is a greatest number",num3); 
        }
    }else if (num2>num3)
    {
        printf("%d is a greatest number",num2); 
    }else{
        printf("%d is a greatest number",num3); 
    }
}

/*
    Output:
    Enter the three number: 300 200 100
    300 is a greatest number
*/