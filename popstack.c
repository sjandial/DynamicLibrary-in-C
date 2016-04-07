#include<stdio.h>
#include"header.h"

int pop(int arr[],int *top)
{
 if(*top==-1)
 {
printf("\nunderflow");
return -1;
}
else
 return arr[(*top)--];
}
