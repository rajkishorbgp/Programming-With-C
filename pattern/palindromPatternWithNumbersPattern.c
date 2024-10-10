/*
   PALINDROMIC Pattern with Numbers pattern
             1
           2 1 2
         3 2 1 2 3
       4 3 2 1 2 3 4
     5 4 3 2 1 2 3 4 5
*/

#include<stdio.h>
void main()
{
    int n=5,p=1,t,f;
    for(int i =1; i<=n; i++)
    {
        f=0;
        t=i;
        for(int j=n; j>i; j--){
            printf("  ");
        }
        for(int k=0; k<p; k++)
        {
            printf("%d ",t);
            if(t==1){
                f=1;
                t++;
            }
            if(f==0){
                t--;
            }else{
                f=1;
                t++;
            }
        }
        p+=2;
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