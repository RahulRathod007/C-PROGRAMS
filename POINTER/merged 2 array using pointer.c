//merge 2 array using pointer
#include<stdio.h>
int main()
{
 int size1,size2,size3,i,*ptr1,*ptr2,*ptr3,k;
 printf("\n enter a size of array \n");
 scanf("%d",&size1);
 int a[size1];
 ptr1=&a;
 printf("\n enter a elements of first array \n");
 for(i=0;i<size1;i++)
 {
  scanf("%d",(ptr1+i));
 }
 printf("\n enter a size of second array \n");
 scanf("%d",&size2);
 int b[size2];
 ptr2=&b;
 printf("\n enter a elemetns of array second array \n");
 for(i=0;i<size2;i++)
 {
  scanf("%d",(ptr2+i));
 }
 printf("display first array \n");
 for(i=0;i<size1;i++)
 {
  printf("%d\t",*(ptr1+i));
 }
 printf("\ndislpay seccond array \n");
 for(i=0;i<size2;i++)
 {
  printf("%d\t",*(ptr2+i));
 }
 size3=size1+size2;
 int c[size3];
 ptr3=&c;
 k=0;
 for(i=0;i<size1;i++)
 {
   *(ptr3+k) = *(ptr1+i);
   k++;
 }
 for(i=0;i<size2;i++)
 {
  *(ptr3+k) = *(ptr2+i);
  k++;
 }
 printf("\n merged array \n");
 for(i=0;i<size3;i++)
 {
  printf("%d\t",*(ptr3+i));
 }
 return 0;
}
