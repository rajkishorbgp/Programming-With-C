/*
                                       Program: 24
    Write a program to find out the length of a given string without using the library function strlen().
*/
#include<stdio.h>
void main()
{
    char arr[] = "rajkishor";
    int i = 0;
    while (arr[i])
    {
        i++;
    }
    printf("Length: %d", i);
}

/*
    Output:
    Length: 9
*/