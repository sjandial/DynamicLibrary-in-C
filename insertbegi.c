#include<stdio.h>
#include"header.h"

void insertbegi(node *temp,int j)
{  node *t1;
int i;

 for(i=1;i<j-1;i++)
{temp=temp->next;
  }
t1=createnode();
insert(t1);
t1->next=temp->next;
temp->next=t1;
}
