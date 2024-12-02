//write a program to create,initialze and use pointers.
#include<stdio.h>
int main()
{
 int a=10,*ptr;
 ptr=&a;
 printf("\n Address of A %u",&a);
 printf("\n Address of ptr %u",ptr);
 printf("\n value of ptr %d",*ptr);
 *ptr=500;
 printf("\n new value of ptr %d",*ptr);
 ptr++;
 printf("\n ptr shift on new %u block ",ptr);
 printf("\n Address of new block %u",ptr);\
 ptr=ptr-2;
 return 0;
}
