#include<stdio.h>
#include"header.h"

void inorder(node1 *root)
{if(root==NULL)
  return;
 inorder(root->left);
 printf("%d->",root->data);
 inorder(root->right);
}
