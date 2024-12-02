#include<stdio.h>
int main()
{
  char ch=65;
 for(int i=1;i<=5;i++)
 {
   for(int j=1;j<=9;j++)
   {
    if( j>=i && j<=10-i)
    {
	 printf("%c",ch);
	 ch++;
	}
	else
	{
	 printf(" ");
	}
   }
   printf("\n");
   ch=65;
 }
 return 0;
}