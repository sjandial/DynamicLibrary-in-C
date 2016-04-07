#include<stdio.h>
#include"header.h"

void linearsearch(int arr[],int size,int x)
{
int i,flag=0;
 for(i=0;i<size;i++)
  if(arr[i]==x) 
   flag=1;
if(flag==1)
 printf("\nelement found");
else
printf("\nelement not found");
}
