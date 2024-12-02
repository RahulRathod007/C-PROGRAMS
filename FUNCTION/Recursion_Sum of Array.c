//wap to input array and calculate its sum using recursion.
#include<stdio.h>
#include<conio.h>
int sum=0;
void main()
{
 int getsum(int[],int);
 int a[5],i,len;
 len=sizeof(a)/sizeof(a[0]);
 printf("\n enter a elements of array \n");
 for(i=0;i<len;i++)
 {
  scanf("%d",&a[i]);
 }
 int result = getsum(a,len);
 printf("\n sum is %d",result);
}
int getsum(int a[5],int len)
{ 
  if(len!=0)
  {
  sum = sum + a[--len];
  getsum(a,len);
  }
  else
  {
    return(sum);
  }
}