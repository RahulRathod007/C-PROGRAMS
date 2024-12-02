#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int *ptr,size,i;
 printf("\n enter a memeory size \n");
 scanf("%d",&size);
 ptr=(int*)calloc(sizeof(int),size);
 printf("\n enter a values \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Display all values \n");
 for(i=0;i<size;i++)
 {
  printf("\n[%d]-->%d\n",i,ptr[i]);
 }
 getch();
}