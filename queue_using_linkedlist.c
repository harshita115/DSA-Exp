#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int info;
 struct node *next;
};
typedef struct node queue;
void insert(int);
int del();
void display();
queue *front=NULL;
queue *rear=NULL;
void main()
{
 int ch,item;\
 while(1)
 {
   printf("Choose \n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("\nEnter item to be inserted: ");
   scanf("%d",&item);
   insert(item);
   break;
   case 2:printf("Deleted item is %d\n",del());
   break;
   case 3:display();
   break;
   case 4:exit(0);
  }
 }
}
void insert(int item)
{
 queue *n;
 n=(queue *)malloc(sizeof(queue));
 n->info=item;
 n->next=NULL;
 if(front==NULL)
 {
  front=n;
  rear=n;
 }
 else
 {
  rear->next=n;
  rear=n;
 }
}
int del()
{
 int x;
 queue *n;
 if(front==NULL)
 {
  printf("Queue underflow\n");
  return 0;
 }
 else
 {
  n=front;
  front=n->next;
  x=n->info;
  free(n);
  return x;
 }
}
void display()
{
 queue *i;
 printf("Elements of queue are\n");
 for(i=front;i!=NULL;i=i->next)
 {
  printf("%d\t",i->info);
 }
}

