#include<stdio.h>
int main()
{
  for(int i=1;i<=9;i++)
  {
    for(int j=1;j<=9;j++)
    {
	  if((j<=5-i ||j>=7-i) && (j<=i-5 || j>=i-3))
	 {
	  printf(" ");
	 }
	 else if
	 {
	  printf("*");
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