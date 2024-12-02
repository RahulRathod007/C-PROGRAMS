#include<stdio.h>
int main()
{
 int i=16,no=1;
 for(i=16;i>=2;i=i-2)
 {
  printf("%d %d ",i,no*no);
  no++;
 }
 printf("\n");
}
