//Write a c  program to find positive and negative number in array.
#include<stdio.h>
int main()
{
 int a[5],i;
 printf("\n enter a values of Array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Positive number : ");
 for(i=0;i<5;i++)
 {
   if(a[i]>0)
   {
    printf("\t %d",a[i]);
   }
 }
 printf("\n negative number : ");
 for(i=0;i<5;i++)
 {
   if(a[i]<0)
   {
    printf("\t %d",a[i]);
   }
 }
 printf("\n zero are : ");
 for(i=0;i<5;i++)
 {
    if(a[i]==0)
    {
	printf("\t %d",a[i]);
	}
 }
 return 0;
}