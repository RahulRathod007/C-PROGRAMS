#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3],i,j,sum=0;
 printf("\nenter a elemetns in matrix 1\n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
   }
 }
 printf("\nenter a second matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	  scanf("%d",&b[i][j]);
	}
 }
 printf("\n Display First matrix\n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	   printf("\t%d",a[i][j]);
	}
	 printf("\n");
 }
 printf("\nDisplay Second matrix \n");
 for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	    printf("\t%d",b[i][j]);
	  }
	  printf("\n");
  }
  printf("\n sum of two matrix is \n");  // logics
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {  
        c[i][j] = a[i][j] + b[i][j];
	    printf("\t%d",c[i][j]);
	 }
	 printf("\n");
  }
  
 return 0;
}