//search  value in array using pointer.
#include<stdio.h>
int main()
{
 int skey,i,size,*ptr,flag=0;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elemetns of aaray \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Given array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 printf("\n Enter a value want to be search \n");
 scanf("%d",&skey);
 for(i=0;i<size;i++)
 {
   if(ptr[i] == skey)
   {
     flag = 1;
     break;
   }
 }
 if(flag)
 {
  printf("\n Value Found \n");
 }
 else
 {
  printf("\n Value not found \n");
 }
 return 0;
}