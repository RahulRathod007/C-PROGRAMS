#include<stdio.h>
int main()
{
 int i=8;
 int no=2;
 for(int i=8;i>=1;i--)
 {
  printf(" %d %d ",i,no*no*no);
  no++;
 }
 getch();
}