#include<stdio.h>
#include"header.h"

void postorder(node1 *root)
{if(root==NULL)
  return;
postorder(root->left);
  postorder(root->right);
printf("%d->",root->data);
}
