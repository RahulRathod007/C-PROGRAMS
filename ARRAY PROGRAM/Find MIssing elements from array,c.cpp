#include<stdio.h>
int main()
{
 int i,j,size,temp;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 printf("\n enter a elemdents of array \n");
 for(i=0;i<size;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("%d",a[i]);
 }
 for(i=0;i<size;i++)
{
    for(j=(i+1);j<=size;j++)
    {
	 if(a[i]>=a[j])
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	 }
	}
}
   printf("\nAssending Array ");
   for(i=0;i<size;i++)
   {
    printf("\t%d",a[i]);
   }
 printf("\nMissing elements are ");
 for(i=0;i<size-1;i++)
 {
   for(j=a[i]+1;j<a[i+1];j++)
   {
     printf("\t%d",j);
   }
 }
 return 0;
}