//How to store address of another variable in pointer
#include<stdio.h>
int main()
{
 int a=100,*ptr;
 ptr=&a;
 printf("\n Address of ptr %u",ptr);
 printf("\n Address of A %u",&a);
}