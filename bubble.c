#include<stdio.h>
#include"header.h"

void bubblesort(int arr[],int size)
{ int i,j;
 for(i=0;i<size;i++)
 { for(j=0;j<size-i-1;j++)
   {
     if(arr[j+1]<arr[j])
           swap(&arr[j+1],&arr[j]);
 }
}
}      
 
