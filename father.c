#include<stdio.h>
#include"header.h"

node1 * father(int count,int x,node1 *root)
{
 if(x==1)
return root;
root=father(count,x/2,root);
if(x==count)
 return root;
else
{if(x%2==0)
 return root->left;
else
 return root->right;
}
}
