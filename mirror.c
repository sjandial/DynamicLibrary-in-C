#include<stdio.h>
#include"header.h"

void mirror(node1 *root,int argc,int i)
{ 
 node1 *temp;
if(root->left==NULL&&root->right==NULL)
{
 return ;
}
else
{temp=root->left;
 root->left=root->right;
root->right=temp;
mirror(root->left,argc,++i);
mirror(root->right,argc,++i);
if(i==2)
inorder(root);
}
}

