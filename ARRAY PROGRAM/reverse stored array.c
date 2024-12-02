#include<stdio.h>
int main()
{
 int i,size,f,l,mid,temp;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 f =0;
 mid = size /2;
 l = size-1;
 //temp=0;
 printf("\n Reverse array ");
 for(f=0;f<mid;f++)
 {
  temp = a[f];
  a[f] = a[l];
  a[l] = temp;
  l--;
 }
 for(i=0;i<size;i++)
 {
 printf("\t%d",a[i]);
 }
 return 0;
}