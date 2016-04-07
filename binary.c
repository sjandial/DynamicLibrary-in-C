#include<stdio.h>
#include"header.h"
void binarysearch(int arr[],int size,int x)
{
 int f,l,mid,flag;
f=0;l=size-1;flag=0;
while(f<=l)
 { 
  mid=(f+l)/2;
  if(arr[mid]==x)
   {flag=1;
    break;
   }
 else if(x<arr[mid])
 l=mid-1;
 else
  f=mid+1;
}
if(flag==1)
printf("\nelement found");
else
printf("\nelement not found");
}

