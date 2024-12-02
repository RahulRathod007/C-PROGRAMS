// Write a C program to find Kth smallest number from an array.
#include<stdio.h>
#include<conio.h>
void main()
{
 int i,no,size,min;
 printf("\n enter a size \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements \n");
 for(i=0;i<size;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Display Array \n");
 for(i=0;i<size;i++)
 {
   printf("\n%d",a[i]);
 }
 printf("'\n Assending Array \n");
 for(i=0;i<size;i++)
 {
   for(int j=i+1;j<size;j++)
   {
     	if(a[i]>a[j])
     	{
     		int temp=a[i];
     		a[i]=a[j];
     		a[j]=temp;
	 	}
   }
   printf("\t%d",a[i]);
 }
 printf("\n Enter a no \n");
 scanf("%d",&no);
 min=a[0];
 for(i=0;i<no;i++)
 {
  min=a[i];
 }
 printf("\nKth smallest elements is %d",min);
}