#include<stdio.h>
#include"header.h"

void insertendi(node *temp,int j)
{  node *t1,*t2;
t1=temp;
int i;
 for(i=1;i<j;i++)
{temp=temp->next;
  } 
while(temp->next!=NULL)
{temp=temp->next;
t1=t1->next;
}
t2=createnode();
insert(t2);
t2->next=t1->next;
t1->next=t2;
}
