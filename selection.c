#include<stdio.h>
#include"header.h"

void selectionsort(int arr[],int size)
{
 int i,j,small,y;
for(j=0;j<size-1;j++)
{y=j;
small=arr[j];
for(i=j+1;i<size;i++)
 {
  if(arr[i]<small)
    { small=arr[i];
     y=i;
     }
 }
 swap(&arr[j],&arr[y]);
}
}
