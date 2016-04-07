#include<stdio.h>
#include"header.h"

void insertbeg(struct node **temp)
{node *t;
t=createnode();
insert(t);
t->next=*temp;
*temp=t;
}
