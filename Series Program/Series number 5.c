#include<stdio.h>
int main()
{
 int i=5,no=1,k=9;
 for(i=5;i<=25;i+=5)
 {
  printf("%d %d ",no*2,k*k*k);
  k--;
  no++;
 }
 printf("\n");
 }