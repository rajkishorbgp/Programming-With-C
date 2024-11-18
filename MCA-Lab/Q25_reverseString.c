/*
                        Program: 25 
    Write a program to print the reverse of a given string. 
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char str[40],temp;
    int i = 0;
    printf("Enter the String: ");
    scanf("%s", &str);
    while (str != '\0')
    {
        printf("%c\n", temp);

        // temp = str[strlen(str) - 1 - i];
        // str[strlen(str) - 1 - i] = str[i];
        // str[i] = temp;
        i++;

    }
    printf("raj %s", str);

}