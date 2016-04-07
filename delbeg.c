#include<stdio.h>
#include<stdlib.h>
#include"header.h"

node * delbeg(node *temp)
{node *t1;
t1=temp;
temp=temp->next;
free(t1);
return temp;
}
