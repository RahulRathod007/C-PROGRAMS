//Write a c program to find even and odd number in array.
#include<stdio.h>
int main()
{
 int a[5],i;
 printf("\n enter a values of array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 } 
 printf("\n even no is " );
 for(i=0;i<5;i++)
 { 
   if(a[i]%2==0)
   {
     printf("\t %d",a[i]);
   }
 }
 printf("\n odd no is ");
 for(i=0;i<5;i++)
 {
   if(a[i]%2!=0)
   {
   	 printf("\t %d",a[i]);
   }
 }
 return 0;
}