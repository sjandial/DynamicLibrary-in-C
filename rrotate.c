#include<stdio.h>
#include"header.h"

node1 * rightrotate(node1 *root)
{
 node1 *temp;
 temp=root->left;
 root->left=temp->right;
 temp->right=root;
root->height=modifyheight(root);
return temp;
}
