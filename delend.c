#include<stdio.h>
#include"header.h"
#include<stdlib.h>

void delend(node *temp)
{node *t1;
t1=temp;
if(temp->next==NULL)
{
 free(temp);
 return;
}
temp=temp->next;
while(temp->next!=NULL)
{temp=temp->next;
t1=t1->next;
}
t1->next=NULL;
free(temp);
}
