// found element using linear search. 
#include<stdio.h>
int main()
{
 int i,size,search,flag=0;
 printf("\n enter a array size \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 printf("\n enter a element want to be search \n");
 scanf("%d",&search);
 for(i=0;i<size;i++)
 {
  if(a[i]==search)
  {
   flag=1;
   break;
  }
 }
 if(flag)
 {
  printf("\n value found");
 }
 else
 {
  printf("\n value not fount");
 }
 return 0;
}