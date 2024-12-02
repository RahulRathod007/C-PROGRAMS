// Write a c program to calculate sum of array is size 5.
#include<stdio.h>
int main()
{
 int a[5],i,sum=0;
 printf("\n enter a values \n ");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
  sum = sum + a[i];
 }
  /*for(i=0;i<5;i++)
  {
   sum = sum + a[i];
  } 
  */
  printf("\n Sum is %d",sum);
  return 0;
}