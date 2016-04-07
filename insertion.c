#include<stdio.h>
#include"header.h"
void insertionsort(int arr[],int size)
{
int i,j,k,y; 
for(i=1;i<size;i++)
 {y=arr[i];
  if(arr[i]<arr[i-1])
   {
    for(k=0;k<i;k++)
     {
      if(arr[k]>y)
       break;
      } 
   
    for(j=i;j>k;j--)
    arr[j]=arr[j-1];
    arr[k]=y;
  }
}
}
