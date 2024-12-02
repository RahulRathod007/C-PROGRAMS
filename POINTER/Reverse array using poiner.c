//reverse arrayt using a pointer
#include<stdio.h>
int main()
{
 int size,i,l,mid,*ptr,temp;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 mid=size/2;
 l=size-1;
 for(i=0;i<mid;i++)
 {
   temp=a[i];
   a[i]=a[l];
   a[l]=temp;
   l--;
 }
 printf("\n Reverse array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 return 0;
}