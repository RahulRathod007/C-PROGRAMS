#include<stdio.h>
int main()
{
  int a[3][3],i,j,count1=0,count2=0;
  printf("\n entetr a elemetns of array \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
	 scanf("%d",&a[i][j]);
	}
  }
  printf("\n Given matrix\n");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
	  printf("%d",a[i][j]);
	 }
	 printf("\n");
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
	  if(a[i][j]==0)
	  {
	   count1++; //count1 for zero value
	  }
	  else
	  {
	   count2++; // count2  for nonzero value
	  }
    }
  }
	if(count1>count2)
	{
      printf("\n Sparse Matrix \n");	
	}
	else
	{
	 printf("\n Dense matrix \n");
    }
  return 0;
}