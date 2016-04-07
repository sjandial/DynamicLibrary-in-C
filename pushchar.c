#include"header.h"

void pushc(char arr[],char x,int *top)
{ if(*top>=49)
    printf("stack if full");
else{  
*top=*top+1;
 arr[*top]=x;
}
}  
