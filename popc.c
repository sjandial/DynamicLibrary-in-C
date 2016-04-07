#include"header.h"

char popc(char arr[],int *top)
{ char x;
  if(*top==-1)
     {
       return '\0';
    }
else{
  x=arr[*top];  
  *top=*top-1;
  return x;
}
}
