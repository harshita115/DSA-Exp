#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push(int);
int pop();
void display();
int stack[10];
int top=-1;
void main()
{
 int ch,i,item;
 while(1)
 {
  printf("Choose one \n1.Push\n2.Pop\n3.Display\n4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("Enter the item");
   scanf("%d",&item);
   push(item);
   break;
   case 2:printf("Popped item is %d\t",pop());
   break;
   case 3:display();
   break;
   case 4:exit(0);
  }
 }
}
void push(int item)
{
 if(top==9)
 printf("Stack overflow");
 else
 {
  top++;
  stack[top]=item;
 }
}
int pop()
{
 int x;
 if(top<0)
 {
  printf("Stack underflow");
  return 0;
 }
 else
 {
  x=stack[top];
  top--;
  return x;
 }
}
void display()
{
 int i;
 printf("Elements of stack are\n");
 for(i=top;i>=0;i--)
 {
  printf("%d\t",stack[i]);
 }
}
