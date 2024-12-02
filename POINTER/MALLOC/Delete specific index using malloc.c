//delete specific index using malloc
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int size,i,index,*ptr;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a elements of array\n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Display elements of array \n");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 printf("\n enter a index \n");
 scanf("%d",&index);
 printf("\n After a deleting index \n");
 for(i=index;i<size-1;i++)
 {  
   ptr[i]=ptr[i+1];
 }
 for(i=0;i<size-1;i++)
 {
  printf("\t%d",ptr[i]);
 }
 return 0;
}