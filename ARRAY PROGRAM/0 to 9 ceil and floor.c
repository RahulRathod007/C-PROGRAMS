#include<stdio.h>    // ceiling = closest higher number
int main()           // floor = closest lower number
{
 int i,n,floor,ceil,a[5];
 printf("\n enter a elements of array \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 {
  printf("\t%d",a[i]);
 }
 for(n=0;n<=9;n++)
{
 for(i=0;i<5;i++)
 {
   if(a[0]>n)
   {
    ceil = a[0];
    floor = -1;
    break;
   }
   if(a[4]<n)
   {
    ceil = -1;
    floor = a[4];
    break;
   }
   if(a[i]==n)
   {
    ceil = a[i];
    floor = a[i];
    break;
   }
   if(a[i]<n && a[i+1]>n)
   {
    ceil = a[i+1];
    floor = a[i];
    break;
   }
 }
 printf("\n  n= %d\nfloor = %d\n\nceilling = %d",n,floor,ceil);
}
 return 0;
}