#include<stdio.h>
#include"header.h"
#include<stdlib.h>




void del(node1 **root,int x,node1 *tree)
{

if((*root)->data==x)
 
 delbst(*root,&tree);
 
else if(x<(*root)->data)
  del(&((*root)->left),x,tree);
else
del(&((*root)->right),x,tree);
}
