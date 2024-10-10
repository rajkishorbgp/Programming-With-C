/*
                           Program: 3
    Write a C program to calculate average and percentage of your high school result
*/

#include<stdio.h>
int main() 
{
    float s1,s2,s3,s4,s5, sum = 0, ave, per;
    int i;

    printf("Enter five subjects marks : ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    sum = s1+s2+s3+s4+s5;   
    ave = sum / 5.0;
    per = (sum / 500.0) * 100;

    printf("\nTotal Marks = %.2f\n", sum);
    printf("Average Marks = %.2f\n", ave);
    printf("Percentage = %.2f%%\n", per);

    return 0;
}

/*
    Output:
    Enter five subjects marks : 70 70 70 60 80

    Total Marks = 350.00
    Average Marks = 70.00
    Percentage = 70.00%

*/