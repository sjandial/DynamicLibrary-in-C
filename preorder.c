#include<stdio.h>
#include"header.h"

void preorder(node1 *root)
{if(root==NULL)
  return;
printf("%d->",root->data); 
preorder(root->left);
  preorder(root->right);
}

