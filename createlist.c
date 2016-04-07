#include<stdio.h>
#include"header.h"

void insert(struct node *temp)
{printf("\nenter the info");
scanf("%d",&temp->info);
}

node * link(node *temp,node *last)
{if(temp==last)
  {
  last->next=NULL;
  return last;
  } 
 else
  {
    last->next=temp;
    temp->next=NULL;
    last=temp;
    return last;
  }
}	
 
node * createlist()
{node *last,*temp,*start;
 start=NULL;
 int i,t=1;
 do
{temp=createnode();	
 if(t==1)
{
 start=temp;
 last=start;
 t++;}
insert(temp);
last=link(temp,last);
temp=NULL;
printf("do u want to continue");
scanf("%d",&i);
}while(i==1);
 return start;
}

