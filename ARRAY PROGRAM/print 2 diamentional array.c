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
   printf("\n\nTwo Diamentional Matrix is\n\n"); 
    for(i=0;i<3;i++)
 {
   	for(j=0;j<3;j++)
   {
   printf(" %d ",a[i][j]);
   }
    printf("\n");
 }
 return 0;
}