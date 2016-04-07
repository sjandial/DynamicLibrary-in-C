#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void stree()
{int count=0;
 int t,i,j;
system("reset");
printf("\nEnter the no of nodes");
scanf("%d",&i);
int arr[100];
node1 *root;
root=NULL;
printf("\nenter the elements of tree");
        for(j=0;j<i;j++)
         scanf("%d",&arr[j]);
        for(j=0;j<i;j++)
         inserttree(&root,arr[j],j+1);

do
{
printf("\n   **************************************************************************                     ");
printf("\nWhat u want to do");
printf("\n1 for Creation\n2 for Inorder traversal\n3 for Preorder traversal\n4 for Postorder traversal\n5 for Height\n0 to go back");
scanf("%d",&t);
switch(t)
{
 
 case 1:printf("\nEnter the no of nodes");
scanf("%d",&i);
root=NULL;

printf("\nenter the elements of tree");
        for(j=0;j<i;j++)
         scanf("%d",&arr[j]);
        for(j=0;j<i;j++)
         inserttree(&root,arr[j],j+1);
         break;
 case 2:
        inorder(root);
         break;
 case 3:
        preorder(root);
        break;
 case 4:
        postorder(root);
        break;
 case 5:
        j=height(root);
        printf("\nHeight of tree is%d",j);
        break;
  case 0:goto xy;
 defalut:
        printf("\n wrong choice entered");
        break;
}
printf("press 1 to continue with simple trees........");
scanf("%d",&t);
system("reset");
}while(t==1);
xy:;
}           
