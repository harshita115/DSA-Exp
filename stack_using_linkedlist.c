#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int item);
int pop();
void display();
struct stack
{
 int info;
 struct stack *next;
};
typedef struct stack node;
node *top=NULL;
void display()
{
 node *i;
 printf("Elements of stack are \n");
 for(i=top;i!=NULL;i=i->next)
 {
  printf("%d\t",i->info);
 }
}
void push(int item)
{
 node *newnode;
 newnode=(node *)malloc(sizeof(node));
 newnode->info=item;
 newnode->next=top;
 top=newnode;
}
int pop()
{
 int x;
 node *n;
 if(top==NULL)
 {
  printf("Stack underflow\n");
  return 0;
 }
 else
 {
  n=top;
  top=n->next;
  x=n->info;
  free(n);
  return x;
 }
}
void main()
{
 int ch,i,item;
 while(1)
 {
  printf("Choose any option\n1.Push\n2.Pop\n3.Display\n4.Exit");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter any item: ");
   scanf("%d",&item);
   push(item);
   break;
   case 2:printf("Deleted item is %d",pop());
   break;
   case 3:display();
   break;
   case 4:exit(0);
  }
 getch();
}
}
