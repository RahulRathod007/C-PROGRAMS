// by using bubble sort arrange array in asending order.
#include<stdio.h>
int main()
{
 int i,j,size,temp=0;
 printf("\n enter a array size \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\nGiven array");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 for(i=0;i<size;i++) //logics
{
    for(j=(i+1);j<=size;j++)
    {
	 if(a[i]>=a[j])
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	 }
	}
}
   printf("\nAssending Array");
   for(i=0;i<size;i++)
   {
    printf("\t%d",a[i]);
   }
   return 0;
}