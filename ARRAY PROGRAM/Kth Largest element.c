// Write a C program to find Kth largest number from an array.
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,A,max,size,no;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements \n");
 for(i=0;i<size;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Display array \n");
 for(i=0;i<size;i++)
 {
   printf("\t%d",a[i]);
 }
 printf("\n Assending Array \n");
 for(i=0;i<size;i++)
 {
   for(int j=i+1;j<size;j++)
   {
     	if(a[i]>a[j])
     	{
	 		int temp = a[i];
     		a[i]=a[j];
     		a[j]=temp;
 		}
   }
   printf("\t%d",a[i]);
 }
  printf("\n Enter a number \n");
  scanf("%d",&no);
  A = size-no;
  max=a[0];
  for(i=0;i<=A;i++)
  {
    max=a[i];
  }
  printf("\n kth largest no is %d",max);
  getch();
}