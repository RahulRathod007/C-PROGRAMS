// find pair of element whose sum closest to 0.
#include<stdio.h>
int main()
{
 int i,j,m,n,x,z,a[5],sum;
 printf("\n enter a elements of array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\nGiven Array ");
 for(i=0;i<5;i++)
 {
  printf("\t%d",a[i]);
 }
 z=a[0]+a[i];
 m=0;
 n=1;
 printf("\n sum close to zero ");
 for(i=0;i<5;i++)
 {
  for(j=i+1;j<5;j++)
  {
   sum = abs(a[i]+a[j]);
   if(sum<z)
   {
    z=sum;
	m=i;
	n=j;
   }
  }
 }
 printf("\n%d & %d",a[m],a[n]);
return 0;
}

