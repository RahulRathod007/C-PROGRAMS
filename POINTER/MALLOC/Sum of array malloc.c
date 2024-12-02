//sum of array using malloc.
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int size,i,*ptr,sum=0;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a elements of array\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 for(i=0;i<size;i++)
 {
  sum = sum + ptr[i];
 }
 printf("\n sum of array is %d",sum);
}