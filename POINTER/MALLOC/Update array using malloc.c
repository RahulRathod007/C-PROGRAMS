//update value of array using malloc 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int size,index,i,value,*ptr;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Display Array \n");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 printf("\n enter index\n");
 scanf("%d",&index);
 printf("\n enter a value \n");
 scanf("%d",&value);
 
 ptr[index] = value;
 
 for(i=0;i<size;i++)
 {
 printf("\t%d",ptr[i]);
 }
 return 0;
}