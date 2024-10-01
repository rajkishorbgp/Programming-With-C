/*

0-1 Triangle pattern
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include<stdio.h>
void main()
{
    int n=5,p;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            p=1;
        }else{
            p=0;
        }
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",p);
            if(p==0){
                p=1;
            }else{
                p=0;
            }  
        }
        printf("\n");
    }  
}

/*
Output:

1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/