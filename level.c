#include<stdio.h>
#include"header.h"

void level(node1 **root,int argc)
{
 int i,j;
node1 *temp;
i=2;j=0;
 node1 *arr[argc];
temp=*root;
arr[0]=*root;
while(i<argc)
{ 
if(i%2==0)
 arr[i-1]=temp->left;
else
{arr[i-1]=temp->right;
 j++;
}
temp=arr[j];

i++;
 
}
write(1,"a",1);
i=0;
while(i<argc)
{
 printf("%d->",(arr[i])->data);
i++;
}
}
