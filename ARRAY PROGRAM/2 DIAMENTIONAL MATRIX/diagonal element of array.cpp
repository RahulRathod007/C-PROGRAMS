#include<stdio.h>
int main()
{
 int i,j,a[3][3];
 printf("\n enter a elements of array \n");
 for(i=0;i<3;i++)
 {  
   for(j=0;j<3;j++)
   { 
	scanf("%d",&a[i][j]);
   }
 }
   printf("\n\nDisplay the matrix\n\n"); 
    for(i=0;i<3;i++)
   { 
   	for(j=0;j<3;j++)
   	{
	  printf("\t%d",a[i][j]);
    }
    printf("\n");
   }
 printf("\nLeft Diagonal of matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	  if(i==j)
	  {
	   printf("\t%d",a[i][j]);
	  }
	}
 }
 printf("\n Right Diagonal if Matrix \n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
   	if(j==2-i)
   	{
     printf("\t%d",a[i][j]);
    } 
  } 
 }
return 0; 
}