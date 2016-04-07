#include<stdio.h>
#include"header.h"

void qusort(int x[],int lb,int ub)
{   int j;

    if(lb>=ub)
        return;
    j=part(x,lb,ub);
    qusort(x,lb,j-1);
    qusort(x,j+1,ub);
}
