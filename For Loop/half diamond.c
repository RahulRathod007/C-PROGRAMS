#include<stdio.h>
int main()
{
 for(int i=1;i<=9;i++)
 {
  for(int j=1;j<=5;j++)
  {
   if(i>=j &&i<=5)
   {
    printf("*");
   }
   else if(i>=5 &&j<=10-i)
   {
    printf("*");
   }
  }
  printf("\n");
 }
 return 0;
}