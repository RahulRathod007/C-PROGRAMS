#include<stdio.h>
int main()
{
 int a[3][3],i,j,sum=0;
 printf("\n enter the value of matrix \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("\n\nDisplay The Matrix\n\n");
 for(i=0;i<3;i++)
 {
  sum=0;
  for(j=0;j<3;j++)
  {
   sum = sum + a[i][j];
   printf(" %d ",a[i][j]);
  }
  printf(" =  %d",sum);
  printf("\n");
 }
 
 return 0;
}