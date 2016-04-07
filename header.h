#include<stdio.h>

void insertionsort(int [],int );
void swap(int *,int *);
void selectionsort(int [],int );
void binarysearch(int [],int ,int );
int part(int [],int ,int );
void qusort(int [],int,int );
void bubblesort(int [],int );
void linearsearch(int [],int ,int );
void array();
void displayarray(int [],int );
struct node
{
int info;
struct node *next;
};
typedef struct node node;

node * createnode();
node * createlist();
void displaylinklist(node *);
void insertbeg(node **);
void delend(node *);
void insertbegi(node *,int );
void insertend(node *);
void insertendi(node *,int );
node * delbeg(node *);
void delbegi(node *,int );
void delendi(node *t,int );
int mid(node *);
void swapnodes(node *,int);
node * reverse(node *);
void stack();
void push(int [],int *,int );
int pop(int [],int *);
void displaystack(int [],int *);
void pushqueue(int [],int *,int );
int popqueue(int [],int *,int );
void displayq(int [],int *,int );
void queue();
struct node1
{
 struct node1 *left;
 struct node1 *right;
 int height;
 int data;

};
typedef struct node1 node1;
node1 * father(int ,int ,node1 *);
node1 * maketree(int );
void inserttree(node1 **,int ,int);
void preorder(node1 *);
void inorder(node1 *);
void postorder(node1 *);
int height(node1 *);
void mirror(node1 *,int ,int );
void stree();
void tree();
void bst();
void avl();
void createbst(node1 **,int );
void del(node1 **,int ,node1 *);
node1 *findfather(node1 *,int );
void create(node1 **,int );
void avlchange(node1 **,int );
int modifyheight(node1 *);
int balance(node1 *);
node1 * leftrotate(node1 *);
node1 * rightrotate(node1 *);
void delavl(node1 **,int ,node1 *);
void delbst(node1 *,node1 **);
void convertpre(char *exp,int l);
void convertpost(char *exp);
void toh(char from,char inter,char to,int n);


















