#include<stdio.h>
#include"header.h"
#include<stdlib.h>

void delbst(node1 *root,node1 **tree)
{
node1 *p,*t,*temp;
int y;
temp=root;
p=findfather(*tree,temp->data);

if(temp->left==NULL&&temp->right==NULL)               
{if(p->left==temp)
  p->left=NULL;
 else
p->right=NULL;
 free(temp);
}

else if(temp->left==NULL||temp->right==NULL)          
{
 if(p->left==temp)
{
if(temp->left)
  p->left=temp->left;
if(temp->right)
  p->left=temp->right;
}
else
{if(temp->left)
  p->right=temp->left;
if(temp->right)
  p->right=temp->right;
}
free(temp);
 }

else
{
 t=temp->right;p=t;
while(t->left!=NULL)
   t=t->left;
y=temp->data;
temp->data=t->data;
t->data=y;
delbst(t,tree);
}
}

