//wap to perform all arithmatic operations using two numbers and using pointer.
#include<stdio.h>
int main()
{
 int a,b,*ptr,*ptr1;
 ptr=&a;
 ptr1=&b;
 printf("\n enter a value of a and b \n");
 scanf("%d%d",&a,&b);
 printf("\n addition is %d",*ptr+*ptr1);
 printf("\n Substraction is %d",*ptr-*ptr1);
 printf("\n multiplication is %d",*ptr**ptr1);
 printf("\n division is %d",*ptr/ *ptr1);
}
/*
#include<stdio.h>
int main()
{
  int a,b,*ptr,*ptr1;
  printf("\n enter a value of A ");
  scanf("%d",&a);
  printf("\n enter a value of B ");
  scanf("%d",&b);
  ptr=&a;
  ptr1=&b;
  printf("\n Address of ptr1 \t%u",ptr);
  printf("\n Address of ptr2 \t%u",ptr1);
  printf("\n value of ptr1 is \t%d",*ptr);
  printf("\n value of ptr2 is \t%d",*ptr1);
  int sum = *ptr+*ptr1;
  int mult = (*ptr)*(*ptr1);
  int div = *ptr /(*ptr1);
  int sub = *ptr-(*ptr1);
  printf("\n Addition of both pointer \n%d",sum);
  printf("\n Substraction of both pointer \n%d",sub);
  printf("\n division of both pointer \n%d",div);
  printf("\n multiplication of both pointer \n%d",mult);
  return 0;
}
*/