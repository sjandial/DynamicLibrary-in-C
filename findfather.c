#include<stdio.h>
#include"header.h"

node1 *findfather(node1 *root,int c)
{
 node1 *r1;
 if(root==NULL||root->data==c)
  return root;
if(root->left->data==c||root->right->data==c)
 return root;
r1=findfather(root->left,c);
if(r1==NULL)
 r1=findfather(root->right,c);
 return r1;
}
