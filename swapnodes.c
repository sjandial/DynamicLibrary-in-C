#include<stdio.h>
#include"header.h"

void swapnodes(node *start,int j)
{
  node *t1,*t2,*t3;
t1=start;
t2=start;
int i;
for(i=1;i<j-1;i++)
{
 start=start->next;
t1=t1->next;
}
while(t1->next->next->next!=NULL)
{t2=t2->next;
t1=t1->next;
}
t1=start->next;
t3=t2->next;
start->next=t3;
t2->next=t1;
start=t1->next;
t2=t3->next;
t3->next=start;
t1->next=t2;
}
