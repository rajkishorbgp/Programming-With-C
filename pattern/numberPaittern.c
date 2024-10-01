/*
    NUMBER PYRAMID pattern
            1
           2 2
          3 3 3
         4 4 4 4
        5 5 5 5 5
*/

#include<stdio.h>
void main()
{
    int n=5;
    for(int i =1; i<=n; i++)
    {
        for(int j=n; j>i; j--){
            printf(" ");
        }
        for(int k=0; k<i; k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

/*
   Output:
        1
       2 2
      3 3 3
     4 4 4 4
    5 5 5 5 5
*/