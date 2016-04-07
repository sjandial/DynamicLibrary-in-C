#include<stdio.h>
#include"header.h"

node1 * leftrotate(node1 *root)
{
 node1 *temp;
 temp=root->right;
root->right=temp->left;
 temp->left=root;
 root->height=modifyheight(root);
return temp;
}
