#include<stdio.h>
int main()
{
 int i,j,a[3][3],lsum=0,rsum=0;
 printf("\n enter a elements of matrix \n");
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    {
	  scanf("%d",&a[i][j]);
	}
 }
 printf("\nDisplay Matrix\n");
 for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
     if(i==j)
     {
	  lsum = lsum + a[i][j];
	 }
	 if(j==2-i)
	 {
	  rsum = rsum +a[i][j];
	 }
	 printf("\t%d",a[i][j]);
   }
   printf("\n");
 }
 printf("\n left Diagonal sum is %d",lsum);
 printf("\n Right Diagonal sum is %d",rsum);
 return 0;
}