#include<stdio.h>
#include"header.h"
#include<stdlib.h>
void delendi(node *temp,int j)
{ int i;
node *t1,*t2;
t1=temp;
t2=temp;
for(i=1;i<j;i++)
{temp=temp->next;
}
while(temp->next!=NULL)
{temp=temp->next;
t1=t1->next;
}
while(t2->next!=t1)
{t2=t2->next;
}
t2->next=t1->next;
free(t1);
}
