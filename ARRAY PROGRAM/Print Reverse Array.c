#include<stdio.h>
int main()
{
 int size,i;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a value of array \n");
 for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]); 
  }
  printf("\n Original Array");
  for(i=0;i<size;i++)
  {
    printf("\t%d",a[i]);
  }
  printf("\n Reverse Array ");
  for(i=size-1;i>=0;i--)
  {
    
	printf("\t%d",a[i]);
  }
  return 0;
}