#include<stdio.h>
#include"header.h"

int popqueue(int arr[],int *front,int rear)
{
 if(*front>rear||rear==-1)
 {
printf("\nunderflow");
return -1;
}
else
 return arr[(*front)++];
}
