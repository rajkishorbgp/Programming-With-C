#include<stdio.h>
void main()
{
    int x,y,z;
    printf("Enter the point: X Y Z: ");
    scanf("%d%d%d",&x,&y,&z);
    if (x>0 && y>0 && z>0)
    {
        printf(" I Quadrant");
    }else if (x>0 && y>0 && z<0)
    {
        printf("II Quadrant");
    }
    else if (x>0 && y<0 && z>0)
    {
        printf("III Quadrant");
    }
    else if (x>0 && y<0 && z<0)
    {
        printf("IV Quadrant");
    }
    else if (x>0 && y<0 && z<0)
    {
        printf("V Quadrant");
    }
    else if (x<0 && y>0 && z<0)
    {
        printf("VI Quadrant");
    }
    else if (x<0 && y<0 && z>0)
    {
        printf("VII Quadrant");
    }else if (x<0 && y<0 && z<0)
    {
        printf("VIII Quadrant");
    }else{
        printf("center point");
    } 
}