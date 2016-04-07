#include<stdio.h>
#include"header.h"

void insertend(node *temp)
{node *t;
while(temp->next!=NULL)
 { temp=temp->next;
}
t=createnode();
insert(t);
t->next=NULL;
temp->next=t;
}
