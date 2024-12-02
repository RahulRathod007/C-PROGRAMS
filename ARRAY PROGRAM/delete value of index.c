// delete a specific value from index.
#include<stdio.h>
int main()
{
 int i,size,index;
 printf("\n enter a size of array ");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements of array\n");
 for(i=0;i<size;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 printf("\n enter a index which want to be delete \n");
 scanf("%d",&index);
 printf("\n After a deleting Index ");
 for(i=index;i<size;i++)
 {
  a[i]=a[i+1];
 }
 for(i=0;i<size-1;i++)
 {
   printf("\t%d",a[i]);
 }
 return 0;
}