#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,a[10],size,temp;
 printf("Enter the size of array");
 scanf("%d",&size);
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;i<size;i++)
 {
  for(j=0;j<size-1;j++)
  {
   if(a[j]>a[j+1])
   {
    temp=a[j];
    a[j]=a[j+1];
    a[j+1]=temp;
   }
  }
 }
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 getch();
}
