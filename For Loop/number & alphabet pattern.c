#include<stdio.h>
int main()
{
 for( int i=1;i<=5;i++)
 {
   for(int j=1;j<=5;j++)
   {
    if(i<j)
    {
	 printf(" ");
	}
	else if(i%2==0)
	{
	 printf("%c",64+j);
	}
	else
	{
	 printf("%c",48+j);
	}
   }
   printf("\n");
 }
 return 0;
}