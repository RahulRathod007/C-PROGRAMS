#include<stdio.h>
int main()
{
 for(int i=1;i<=7;i++)
 {
  for(int j=1;j<=4;j++)
  {
  	if( (i>=j && i<=4) || (i>=4 && j<=8-i))
  	{
	 printf("%d",j);  
	}
	else
	{
	 printf(" ");
	}
  }
  printf("\n"); 
 }
 return 0;
 }\