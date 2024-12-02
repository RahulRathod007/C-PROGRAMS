#include<stdio.h>
int main()
{
 for(int i=1;i<=10;i++)
 {
   for(int j=1;j<=10;j++)
   {
    if((i<=5 && j<=6-i || j>=5+i) || (i>=5 && j<=i-5 || j>=16-i))
    {
    	printf("*");
	}
	else
	{
	  printf(" ");
	}
   }
   printf("\n");
 }
 return 0;
}