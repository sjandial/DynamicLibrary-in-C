#include<stdio.h>
#include"header.h"

int balance(node1 *root)
{
int x,y;
 if(root->left==NULL)
  x=-1;
 else
  x=root->left->height;
if(root->right==NULL)
  y=-1;
else
 y=root->right->height; 
return (x-y);
}
