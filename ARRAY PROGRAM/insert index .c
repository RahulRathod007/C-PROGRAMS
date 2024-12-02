//WAP to insert the element on specified position in array 
#include<stdio.h>
int main()
{
 int a[6],i,index,value;
 printf("\n enter a elements of array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]); 
 }
 printf("\n given array \n");
 for(i=0;i<5;i++)
 {
  printf("\t%d",a[i]);
 }
 printf("\n value want to be added \n");
 scanf("%d",&value);
 printf("\n enter a index where want to added value \n");
 scanf("%d",&index);
 for(i=5;i>index;i--)
 {
  a[i]=a[i-1];
 }
 a[index]=value;
 printf("\n after insertion ");
 for(i=0;i<6;i++)
 {
  printf("\t%d",a[i]);
 }
 return 0;
}