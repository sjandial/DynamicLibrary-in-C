#include<stdio.h>
#include"header.h"

int part(int x[],int lb,int ub)
{
    int up,down,temp,j,a;
    up=ub;
    down=lb;
    a=x[lb];
    while(down<up)
    {
        while(x[down]<=a)
            ++down;
        while(x[up]>a)
        --up;
        if(down<up)
        {
            temp=x[down];
            x[down]=x[up];
            x[up]=temp;
        }
    }
    x[lb]=x[up];
    x[up]=a;
    j=up;
    return j;
}

