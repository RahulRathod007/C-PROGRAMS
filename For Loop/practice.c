#include<stdio.h>
int main()
{
  int k=1;
 for(int i=1;i<=5;i++)
 {
  for(int j=1;j<=5;j++)
  {
   if((i+j)%2)
   {
    printf("%d",k);
      k++;
   }
   else
  printf("*");
  }
  printf("\n");
}
  return 0;
}