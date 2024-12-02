#include<stdio.h>
int main()
{
 int i,size;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Original Array ");
 for(i=0;i<size;i++)
 {
 printf("%d",a[i]);
 }
 int b[size];
 printf("\nCopyied Array ");
 for(i=0;i<size;i++)
 {
  b[i]=a[i];
 }
 for(i=0;i<size;i++)
 {
  printf("%d",b[i]);
 }
 
 return 0;
 }
