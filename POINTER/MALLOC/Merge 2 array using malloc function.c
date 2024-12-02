//wap to merged aaray using malloc function
#include<stdio.h>
int main()
{
 int size1,size2,size3,*ptr,*ptr1,*ptr2,i,k;
 printf("\n enter a size of array \n");
 scanf("%d",&size1);
 printf("\n enter a size of second array \n");
 scanf("%d",&size2);
 size3=size1+size2;
 ptr=(int*)malloc(sizeof(int)*size1);
 ptr1=(int*)malloc(sizeof(int)*size2);
 ptr2=(int*)malloc(sizeof(int)*size3);
 printf("\n enter a elements of first array \n");
 for(i=0;i<size1;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n enter a elemetns of second array \n");
 for(i=0;i<size2;i++)
 {
 scanf("%d",&ptr1[i]);
 }
 printf("\n Display First array ");
 for(i=0;i<size1;i++)
 {
  printf("\t%d",ptr[i]);
 }
 printf("\n Display Second Array ");
 for(i=0;i<size2;i++)
 {
  printf("\t%d",ptr1[i]);
 }
 k=0;
 for(i=0;i<size1;i++)
 {
  ptr2[k]=ptr[i];
  k++;
 }
 for(i=0;i<size2;i++)
 {
  ptr2[k]=ptr1[i];
  k++;
 }
 printf("\n Merged array \n");
 for(i=0;i<size3;i++)
 {
  printf("\t%d",ptr2[i]);
 }
 return 0;
}