//wap program to input an print array using pointer.
#include<stdio.h>
int main()
{
 int size,*ptr;
 printf("\n enter a sizeof array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elements of array \n");
 for(int i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
//  ptr++;
 }
 printf("\n Display Array ");
 for(int i=0;i<size;i++)
 {
   printf("\t%d",ptr[i]);
 }
 return 0;
}