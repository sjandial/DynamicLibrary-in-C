#include<stdio.h>
#include<stdlib.h>
#include"header.h"



void array()
{  
system("reset");
int size,opt,i;
printf("\nEnter the size of the Array");
scanf("%d",&size);
int arr[size];
printf("\nEnter the elements of the Array");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
do
{
printf("\n   **************************************************************************                     ");
printf("\nWhat do u want to perform on arrays");
printf("\n1 for Linear Search\n2 for Binary Search\n3 for Insertion sort\n4 for Bubble sort\n5 for Quick sort\n6 for Selection sort\n7 for Display\n0 to go back");
scanf("%d",&opt);
switch(opt)
{
 case 1: printf("\nWhich element u want to search\n");
         scanf("%d",&opt);
         linearsearch(arr,size,opt);
         break;
 case 2: printf("\nWhich element u want to search\n");
         scanf("%d",&opt);
         binarysearch(arr,size,opt);
         break;    
 case 3: insertionsort(arr,size);
         displayarray(arr,size);
         break;
 case 4: bubblesort(arr,size);
         displayarray(arr,size);
         break;
 case 5: qusort(arr,0,size);
         displayarray(arr,size);
         break;
 case 6: selectionsort(arr,size);
         displayarray(arr,size);
         break;  
 case 7: displayarray(arr,size); 
         break;
 case 0: goto xy; 
 default:
         printf("\n wrong choice entered\n");
        break;
}
printf("\nPress 1 for continue.......");
scanf("%d",&opt);
system("reset");
}while(opt==1);
xy:;
}


