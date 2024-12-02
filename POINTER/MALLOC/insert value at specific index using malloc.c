//insert value at specific index using malloc 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int size,i,value,index,*ptr;
  printf("\n enter a size of array \n");
  scanf("%d",&size);
  ptr=(int*)malloc(sizeof(int)*size);
  printf("\n enter a elements of array \n");
  for(i=0;i<size-1;i++)
  {
   scanf("%d",&ptr[i]);
  }
  printf("\n Display array \n");
  for(i=0;i<size-1;i++)
  {
   printf("\t%d",ptr[i]);
  }
  printf("\n enter a value \n");
  scanf("%d",&value);
  printf("\n enter a index \n");
  scanf("%d",&index);
  printf("\n After inserting index \n");
  for(i=size-1;i>index;i--)
  {
   ptr[i] = ptr[i-1];
  }
  ptr[index]=value;
  for(i=0;i<size;i++)
  {
  printf("\t%d",ptr[i]);
  }
  return 0;
}