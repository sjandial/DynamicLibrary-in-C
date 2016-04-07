#include<stdlib.h>
#include<stdio.h>
#include"header.h"

node * createnode()
{ node *temp;
temp=(node *)malloc(sizeof(struct node));
return temp;
}
