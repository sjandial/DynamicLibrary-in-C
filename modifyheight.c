#include<stdio.h>
#include"header.h"

int modifyheight(node1 *root)
{
 int x,y;
 if(root->left==NULL)
  x=-1;
 else
  x=modifyheight(root->left);
if(root->right==NULL)
  y=-1;
else
 y=modifyheight(root->right); 
return (x>y?x+1:y+1);
}

