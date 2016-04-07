#include<stdio.h>
#include"header.h"

void displaystack(int arr[],int *top)
{int i;
 for(i=0;i<(*top+1);i++)
  printf(" %d",arr[i]);
}

