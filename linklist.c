#include<stdio.h>
#include<stdlib.h>
#include"header.h"

void linkedlist()
{  node *start,*rev;
int i,x,opt;
start=NULL;
start=createlist();
        
do
{system("reset");
printf("\n   **************************************************************************                     ");
printf("\nWhat do u want to perform on linked lists");
printf("\n1 for Creation\n2 for Insertion\n3 for Deletion\n4 for Finding Middle\n5 for Display\n6 for Swapping two nodes \n7 for Reversing the list\n0 to GO Back");
scanf("%d",&opt);
switch(opt)
{
 case 1: start=createlist();
         break;
 case 2: printf("where u want to insert  \n1 for beg \n2 for end ");
        scanf("%d",&x);
        switch(x)
        {
         case 1:
                printf("\nwhere u want to insert from the beginning\n");
                scanf("%d",&i);
                if(i==1)
                   {insertbeg(&start);displaylinklist(start);}
                 else
                   {insertbegi(start,i);write(1,"a",1);displaylinklist(start);}
                   break;
         case 2:
             printf("\nwhere u want to insert from the end\n");
                scanf("%d",&i);
                if(i==1)
                  { insertend(start);displaylinklist(start);}
                 else
                   {insertendi(start,i);displaylinklist(start);}
                   break;
        }
         break;
             
 case 3: printf("\nwhere u want to delete  \n1 from beg \n2 from end\n ");
        scanf("%d",&x);
        switch(x)
        {
         case 1:
                printf("\nwhere u want to delete from the beginning\n");
                scanf("%d",&i);
                if(i==1)
                   {start=delbeg(start);displaylinklist(start);}
                 else
                   {delbegi(start,i);displaylinklist(start);}
                   break;
         case 2:
             printf("\nwhere u want to delete from the end\n");
                scanf("%d",&i);
                if(i==1)
                   {delend(start);displaylinklist(start);}
                 else
                   {delendi(start,i);displaylinklist(start);}
                   break;
        }
         break;
 case 4: x=mid(start);
         if(x==0)
         printf("\nsorry,mid cant't be find out\n");
         else
         printf("\nMid=%d",x); 
         break;
 case 5: displaylinklist(start);
         break;
 case 6: printf("\nwhich position u want to swap\n");
         scanf("%d",&i); 
         swapnodes(start,i);
         break;  
 case 7: rev=reverse(start);
         displaylinklist(rev); 
         break;
 case 0:goto xy;
 default:
         printf("\n wrong choice entered");
        break;
}
printf("\npress 1 to continue with linklists.......\n");
scanf("%d",&opt);
}while(opt==1);
xy:;
}


