#include<stdio.h>
int main()
{
 int i,j,size,skey,temp;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 for(i=0;i<size;i++)
 {
 	for(j=i+1;j<size;j++)
  {
 	if(a[i]>a[j])
 	{
     temp= a[i];
     a[i]=a[j];
   	 a[j]=temp;
    }
    if(a[i]
  }
 }
 printf("\n Sorted array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",a[i]);
 }
 for(i=0;i<size;i++)
 
 return 0;
}