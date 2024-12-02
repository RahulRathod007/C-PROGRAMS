// Write a c program to find maximum and minimum number in array.
#include<stdio.h>
int main()
{
 int a[5],i,max,min;
 printf("\n enter a values of Array\n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 max=a[0];
 for(i=0;i<5;i++)
 {
   if(a[i]>max)
   {
   	 max=a[i];
   }
}
 min=a[0];
 for(i=0;i<5;i++)
{
   if(a[i]<min)
   {
    min=a[i];
   }
}
 printf("\n max is %d",max);
 printf("\n min is %d",min);
 return 0;
}