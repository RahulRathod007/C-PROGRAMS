#include<stdio.h>
int main()
{
  for(int i=1;i<=9;i++)
  {
    for(int j=1;j<=9;j++)
    {
	 if((i<=4 && j<=3+i || j>=5+i) || (i>=6 && j<=13-i || j>=15-i))
	  printf("   ");
	 }
	 else 
	 {
	  printf(" * ");
	 }
	}
	printf("\n");
  }
    return 0;
}