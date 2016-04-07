#include<stdio.h>
#include<stdlib.h>
#include"header.h"

int height(node1 *root)
{
 int x,y;
 if(root->left==NULL)
  x=0;
 else
  x=height(root->left)+1;
if(root->right==NULL)
  y=0;
else
 y=height(root->right)+1; 
return (x>y?x:y);
}

