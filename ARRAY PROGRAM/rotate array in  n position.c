// wap to rotate array in n positions.
#include<stdio.h>
int main()
{
 int i,size,pos;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 printf("\n\nenter a position want to be rotate array \n");
 scanf("%d",&pos);
 printf("\n\nRotated Array ");
 for(i=pos;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 for(i=0;i<pos;i++)
 {
  printf("\t%d",a[i]);
 }
 return 0;
}