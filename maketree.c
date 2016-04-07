#include<stdio.h>
#include"header.h"
#include<stdlib.h>

node1 * maketree(int x)
{
 node1 *temp;
  
  temp=(node1 *)malloc(sizeof(node1));
  temp->left=NULL;
  temp->right=NULL;
  temp->data=x;
  
return temp; 
 }
