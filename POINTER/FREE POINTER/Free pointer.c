#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int size,i,*ptr;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a values of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 free(ptr); // dangling of pointer
 ptr=NULL;
 printf("\n Display array values \n");
 for(i=0;i<size;i++)
 {
  printf("%d",ptr[i]);
 }
 getch();
}