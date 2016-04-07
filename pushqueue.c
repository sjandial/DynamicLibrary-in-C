#include<stdio.h>
#include"header.h"

void pushqueue(int arr[],int *rear,int size)
{int x;
 if((*rear)>=size-1)
  printf("\noverflow");
else
 {printf("\n what do u want to push");
        scanf("%d",&x);
arr[++(*rear)]=x;
}
}
