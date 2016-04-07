#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void tree()
{
 int t,i;
do
{system("reset");
printf("\n   **************************************************************************                     ");
printf("\nWhat u want to do");
printf("\n1 for Simple tree\n2 for Binary Search tree\n3 for AVL\n0 to go back");
scanf("%d",&t);
switch(t)
{
 case 1:stree();
        break;
 case 2:bst();
        break;
 case 3:avl();
        break;
 case 0:goto xy;
default:
  printf("wrong choice entered");
  break;
}
printf("\npress 1 to continue with trees........");
scanf("%d",&i);

}while(i==1);
xy:;
}  
 
