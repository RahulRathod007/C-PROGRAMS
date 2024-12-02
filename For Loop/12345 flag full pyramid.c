#include<stdio.h>
int main()
{
 int flag;               
 for(int i=1;i<=5;i++)
 {
  int a=1;
  for(int j=1;j<=9;j++)
  {
    if(j>=6-i && j<=4+i && flag)
    {
	  printf("%d",a);
	  a++;
	  flag=0;
	}
	else
	{
	 printf(" ");
	 flag=1;
	}
  }
  printf("\n");
 }
 return 0;
}