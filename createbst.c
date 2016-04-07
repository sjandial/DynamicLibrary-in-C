#include<stdio.h>
#include"header.h"

void createbst(node1 **root,int x)
{ node1 *temp,*p;
 int i=0;
  if(*root==NULL)
    *root=maketree(x);
  else
{
 temp=*root;
 while(temp!=NULL)
{p=temp;
 if(x<temp->data)
  temp=temp->left;
 else
 temp=temp->right;
}
if(x<p->data)
p->left=maketree(x);
else
p->right=maketree(x);
}
}
