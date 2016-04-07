#include<stdio.h>
#include"header.h"


void avl()
{
system("reset");
 int t,i,j;
printf("\nEnter the no of nodes");
scanf("%d",&i);
int arr[100];
node1 *root;
root=NULL;
printf("\nEnter the elements of tree\n");
        for(j=0;j<i;j++)
          scanf("%d",&arr[j]);
        for(j=0;j<i;j++)
         create(&root,arr[j]);

do
{
printf("\n   **************************************************************************                     ");
printf("\nWhat u want to do");
printf("\n1 for creation\n2for Preorder traversal\n3 for Inorder Traversal\n4 for Insertion\n5 for Deletion\n0 to go back");
scanf("%d",&t);
switch(t)
{
 case 1:printf("\nEnter the no of nodes");
        scanf("%d",&i);
        
        root=NULL;
        printf("\nEnter the elements of tree");
        for(j=0;j<i;j++)
         scanf("%d",&arr[j]);
        for(j=0;j<i;j++)
         create(&root,arr[j]);
        break;
 case 2:
        preorder(root);
         break;
 case 3:inorder(root);
         break;
 case 4:
        printf("\nWhich element u want to insert\n");
        scanf("%d",&j);
        create(&root,j);
        break;
 case 5:printf("\nWhich element u want to delete\n");
        scanf("%d",&j);
        delavl(&root,j,root);
        break;
case 0:goto xy;
 
default:
         printf("\n wrong choice entered\n");
        break;
}
printf("\npress 1 for continuing with avl trees......");
scanf("%d",&t);
system("reset");
}while(t==1);
xy:;
}         
