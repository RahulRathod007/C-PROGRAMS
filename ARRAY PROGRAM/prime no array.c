#include<stdio.h>
int main()
{
 int a[5],i,j,count;
 printf("enter a values of array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&a[i]);
 }
 printf("\n prime number are ");
 for(i=0;i<5;i++)
 {
   j=1;
   count=0;
   while(j<=a[i])
   {
    if(a[i]%j==0)
    {
	 count++;
	}
	j++;
    }
	if(count==2)
	{
	 printf("%d \t",a[i]);
    }
 }
 return 0;
} 