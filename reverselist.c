#include<stdio.h>
#include"header.h"

node * reverse(node *temp)
{node *t1,*t2,*t3;
t2=NULL;
t1=temp;
t3=t1->next;
while(t3!=NULL)
{t1->next=t2;
t2=t1;
t1=t3;
t3=t3->next;
}
t1->next=t2;
return t1;
}
