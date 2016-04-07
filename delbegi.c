#include<stdio.h>
#include"header.h"
#include<stdlib.h>


void delbegi(node *temp,int j)
{node *t1;
t1=temp;
int i;
temp=temp->next;
for(i=1;i<j-1;i++)
{temp=temp->next;
t1=t1->next;
}
t1->next=temp->next;
free(temp);
}

