#include<stdio.h>
#include"header.h"

void delavl(node1 **root,int x,node1 *tree)
{
if((*root)->data==x)
 
 delbst(*root,&tree);
 
else if(x<(*root)->data)
  del(&((*root)->left),x,tree);
else
del(&((*root)->right),x,tree);
if(*root!=NULL)
avlchange(root,x);
}
