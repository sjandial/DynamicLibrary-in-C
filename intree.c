#include<stdio.h>
#include"header.h"

void inserttree(node1 **root,int x,int count)
 { 
 node1 *temp,*temp1;
 temp=maketree(x); 
if(count==1)
   *root=temp;
else
{
 temp1=father(count,count,*root);
if(count%2==0)
 temp1->left=temp;
else
temp1->right=temp;
} 

}

