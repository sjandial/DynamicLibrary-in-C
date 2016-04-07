#include<stdio.h>
#include"header.h"

void create(node1 **root,int x)
{int y;
 if(*root==NULL)
   *root=maketree(x);
 else if(x<(*root)->data)
    create(&((*root)->left),x);
else
  create(&((*root)->right),x);
avlchange(root,x);
}
