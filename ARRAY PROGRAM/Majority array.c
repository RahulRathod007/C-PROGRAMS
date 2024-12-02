#include<stdio.h>
int main()
{
 int i,j,size,mid,count,flag;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a values of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 mid = size/2;
 for(i=0;i<size;i++)
 { 
   count = 0;
   for(j=0;j<size;j++)
   {
     if(a[i]==a[j])
     {
	 count++;
     }
   }
   if(count>mid)
   {
    flag=1;
    break;
   }
 }
   if(flag)
   {
    printf("\nMajority Found");
   }
   else
   {
    printf("\n majority Not Found");
   } 
 return 0;
}