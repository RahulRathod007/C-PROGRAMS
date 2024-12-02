// swap two number without using third variable use pointer .
#include<stdio.h>
int main()
{
  int a,b,*ptr,*ptr1;
  printf("\n enter First value  \n");
  scanf("%d",&a);
  printf("\n enter Second value  \n");
  scanf("%d",&b);
  ptr=&a;
  ptr1=&b;
  printf("\n before swapping \n");
  printf(" ptr=%d \n ptr1=%d\n",*ptr,*ptr1);
  /*
  *ptr = (*ptr) + (*ptr1);  
  *ptr1 =(*ptr) - (*ptr1);
  *ptr = (*ptr) - (*ptr1);
  */
  *ptr = *ptr ^ *ptr1;
  *ptr1= *ptr ^ *ptr1;
  *ptr = *ptr ^ *ptr1; 
  
  printf("\nAfter a swapping\n");
  printf(" ptr=%d \n ptr1=%d ",*ptr,*ptr1);
  return 0;
}