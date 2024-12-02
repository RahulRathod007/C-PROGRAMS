#include<stdio.h>
int main()
{
 int i,size,max,minmax;
 printf("\n enter a size of aaray \n");
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
 max=a[0];
 minmax=a[0];
 for(i=0;i<size;i++)
{
  if(a[i]>max)
  {
    max=a[i];
  }
}
  for(i=0;i<size;i++)
{
   if(max>a[i])
   {
	if(minmax<a[i])
	{
	  minmax = a[i];
    }
   }
}
printf("\n max elements is %d",max);
printf("\n minmax element is %d",minmax);
 return 0;
}