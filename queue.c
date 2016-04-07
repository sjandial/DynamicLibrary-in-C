#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void queue()
{system("reset");
 int size,i,front,rear; 
printf("enter the size of the array");
scanf("%d",&size);
int arr[size];
front=0;
rear=-1;
do
{
printf("\n   **************************************************************************                     ");
 printf("\n What do u want to do");
printf("\n1 for Insert \n2 for Delete \n3 for Display\n0 to go back");
scanf("%d",&i);
 switch(i)
{
 case 1: pushqueue(arr,&rear,size);
         break;
case 2:i=popqueue(arr,&front,rear);
         if(i!=-1)
           printf("\n popped item is%d",i);
         break;
case 3:displayq(arr,&rear,front);
       break;
case 0:goto xy;
default:
         printf("\n wrong choice entered");
        break;
 }
printf("\npress 1 to continue with queues.......");
scanf("%d",&i);
system("reset");
}while(i==1);
xy:;
}
