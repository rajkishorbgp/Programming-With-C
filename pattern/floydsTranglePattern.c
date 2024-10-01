/*
        FLOYD'S Triangle pattern
        1
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
*/
#include<stdio.h>
void main()
{
    int n=5;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}

/*
Output:
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/