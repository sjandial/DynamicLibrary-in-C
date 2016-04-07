#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void stack()
{system("reset");
int size,top,i; 
printf("enter the size of the array");
scanf("%d",&size);
 int arr[size];
top=-1;
do
{
printf("\n   **************************************************************************                     ");
 printf("\nWhat do u want to do");
printf("\n1 for push  \n2 for pop  \n3 for display\n0 to go back");
scanf("%d",&i);
 switch(i)
{
 case 1:push(arr,&top,size);
         break;
case 2:i=pop(arr,&top);
         if(i!=-1)
           printf("\n popped item is%d",i);
         break;
case 3: displaystack(arr,&top);
       break;

case 0:goto xy;
default:
         printf("\n wrong choice entered");
        break;
}printf("\npress 1 to continue with stacks........");
scanf("%d",&i);
system("reset");
}while(i==1);
xy:;
}

