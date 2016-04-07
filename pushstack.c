#include<stdio.h>
#include"header.h"

void push(int arr[],int *top,int size)
{int x;
 if((*top)>=size-1)
  printf("\noverflow");
else
{
 printf("\n what do u want to push");
 scanf("%d",&x);
 arr[++(*top)]=x;
}
}
