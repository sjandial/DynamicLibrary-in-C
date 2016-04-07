#include<stdio.h>
#include"header.h"


void displayq(int arr[],int *rear,int front)
{int i;
 for(i=front;i<(*rear+1);i++)
  printf(" %d",arr[i]);
}
