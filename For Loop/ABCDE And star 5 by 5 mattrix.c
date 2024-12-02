#include<stdio.h>
int main()
{
 char ch=65;
 for(int i=1;i<=5;i++)
 {
  for(int j=0;j<5;j++)
  {
   if((i+j)%2==0)
   {
    printf("%c",ch);
    ch++;
	}
   else 
   {
    printf("*");
   }
  }
  printf("\n");
 }
 return 0;
}