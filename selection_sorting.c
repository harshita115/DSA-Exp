#include<stdio.h>
#include<conio.h>
void sort(int[],int);
void main()
{
 int i,j,a[10],size;
 printf("Enter the size of array");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<size;i++)
 {
  printf("%d",a[i]);
 }
 sort(a,size);
 for(i=0;i<size;i++)
 {
   printf("\n%d",a[i]);
 }
 getch();
}
void sort(int a[],int size)
{
 int i,j,min,index;
 for(i=0;i<size;i++)
 {
  min=a[i];
  index=i;
  for(j=i+1;j<size;j++)
  {
   if(min>a[j])
   {
   min=a[j];
   index=j;
  }
 }
 a[index]=a[i];
 a[i]=min;
 }
}
