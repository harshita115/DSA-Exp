#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[10];int front=-1;
int rear=-1;
void insert(int);
int del();
void display();
void main()
{
 int ch,i,item;
 while(1)
 {
  printf("Choose \n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter the item\n");
   scanf("%d",&item);
   insert(item);
   break;
   case 2:printf("Deleted item is%d\n",del());
   break;
   case 3:display();
   break;
   case 4:exit(0);
  }
 }
 getch();
}
void insert(int item)
{
 if(rear==9)
 {
  printf("Queue overflow\n");
  return;
 }
 else if(front<0)
 {
  front++;
  rear++;
 }
 else
 rear=rear+1;
 queue[rear]=item;
}
int del()
{
 int x;
 if(front<0)
 {
  printf("Queue underflow\n");
  return 0;
 }
 else if(front==rear)
 {
  x=queue[front];
  front=-1;
  rear=-1;
  return x;
 }
 else
 {
  x=queue[front];
  front=front+1;
  return x;
 }
}
void display()
{
 int i;;
 printf("Queue Elements are\n");
 for(i=front;i<=rear;i++)
 {printf("%d\t",queue[i]);}
 printf("\n");
}
