#include<stdio.h>
#include"header.h"

void displaylinklist(struct node *temp)
{   int i;
    i=1;
  while(temp!=NULL)
   {  printf("\n info of node%d is%d",i,temp->info);
      temp=temp->next;
      i++;
    }
} 
