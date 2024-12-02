#include<stdio.h>
int main()
{
 int i=16;
 int no=1;
 for(i=16;i>=1;i=i-2)
 { 
  printf("%d %d ",i,no*no);
  no++; 
 }

 return 0;
}