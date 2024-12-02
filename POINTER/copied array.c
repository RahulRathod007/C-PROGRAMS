//wap to input a array and copied into another array using pointer.
#include<stdio.h>
int main()
{
 int i,size,*ptr1,*ptr2;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr1=&a;
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",ptr1);
  ptr1++;
 }
 ptr1=&a;
 printf("Display Array \n");
 for(i=0;i<size;i++)
 {
   printf("\t%d",*ptr1++);
 }
 *ptr2=*ptr1;
 for(i=0;i<size;i++)
 {
  printf("\t%d",*ptr2);
 }
}