//swapping two number using third variable and using pointer.
#include<stdio.h>
int main()
{
 int a,b,c,*ptr1,*ptr2,*ptr3;
 printf("\n enter a value of A \n");
 scanf("%d",&a);
 printf("\n enter a value of B \n");
 scanf("%d",&b);
 ptr1=&a;
 ptr2=&b;
 ptr3=&c;
 printf("\n Before swapping \n");
 printf("\n ptr1 =\t%d",*ptr1);
 printf("\n ptr2 =\t%d",*ptr2);
 *ptr3=*ptr1;
 *ptr1=*ptr2;
 *ptr2=*ptr3;
 printf("\n\nAfter a swapping \n");
 printf("\n ptr1 =\t%d",*ptr1);
 printf("\n ptr2 =\t%d",*ptr2);
}