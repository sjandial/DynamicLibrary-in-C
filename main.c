#include<stdio.h>
#include"header.h"
#include<stdlib.h>
#include<string.h>

void main()
{system("reset");
int option,i;
printf("                     MICRO PROJECT OF DATA STRUCTURE                                    ");

while(1)
{
printf("\n   **************************************************************************                     ");
printf("\nCHOOSE YOUR OPTION\n");
printf("\n1 for Arrays\n2 for Linkedlist\n3 for Stack\n4 for Queues\n5 for Trees\n0 for Exit");
scanf("%d",&option);
switch(option)
{
 case 1:
        array();
        break;
 case 2:
        linkedlist();
        break;
 case 3:
        stack();
        break;
 case 4:
        queue();
        break;
 case 5:
        tree();
        break;
 case 0: exit(0); 

}
system("reset");
}
}


