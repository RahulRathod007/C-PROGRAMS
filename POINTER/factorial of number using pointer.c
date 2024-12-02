//Factorial of number using pointer .
#include<stdio.h>
int main()
{
 int fact=1,no,*ptr;
 printf("\n enter a number \n");
 scanf("%d",&no);
 ptr=&no;
 while(no!=0)
 {
  fact = fact * (*ptr);
  no--;
 }
 printf("\n factorial is %d",fact);
}