#include<stdio.h>
int main()
{
 int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
 printf("\n enter a elements of first matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	 scanf("%d",&a[i][j]);
	}
 }
 printf("\n enter a elements of second matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	  scanf("%d",&b[i][j]);
	}
 }
 //multiplication logics.
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {   sum = 0;
    	for(k=0;k<3;k++)
    	{
		  sum = sum + a[i][k] * b[k][j];
		}
		c[i][j] = sum;
	}
 }
// printf("\n Display First matrix \n");
// for(i=0;i<3;i++)
// {
//    for(j=0;j<3;j++)
//    {
//	 printf("\t%d",a[i][j]);
//	}
//	printf("\n");
// }
// printf("\n Display Second matrix \n");
// for(i=0;i<3;i++)
// {
//   for(j=0;j<3;j++)
//   {
//     printf("\t%d",b[i][j]);
//   }
//   printf("\n");
// }
 printf("Multiplied Matrix\n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   { 
     printf("\t%d",c[i][j]);
   }
   printf("\n");
 }
 return 0;
}