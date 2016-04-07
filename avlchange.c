#include<stdio.h>
#include"header.h"

void avlchange(node1 **root,int x)
{
int y;
(*root)->height=modifyheight(*root);
y=balance(*root);
if(y<-1||y>1)
{
 if(y>1)
 {
  if((*root)->left->data>x)
    {
      (*root)=rightrotate((*root));
       
    }
  else
   {
     (*root)->left=leftrotate((*root)->left);
     (*root)=rightrotate((*root));
  
  }
 }
 else
{
 if((*root)->right->data>x)
 {
   (*root)->right=rightrotate((*root)->right);
     (*root)=leftrotate((*root));
     
 }
 else
 {
  (*root)=leftrotate((*root));
  
}
}
(*root)->height=modifyheight(*root);
}
}
