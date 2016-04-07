#include<stdio.h>
#include"header.h"

int mid(node *temp)
{node *t1,*t2;
int c,i;
c=1;
i=0;
t1=temp;
t2=temp;
while(temp->next!=NULL)
{temp=temp->next;
c++;
}
if(c%2==0)
return 0;
else 
   {while(t1->next!=NULL)
      {
         t1=t1->next->next;
       
       t2=t2->next;}
       return t2->info;
}
}

