#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,j=1,count=0,no,sum=0;
 printf("\n enter a number");
 scanf("%d",&no);
 while(i<=no)
 {
   count = 0;
   j = 1;
   while(j<=i)
{
    if(i%j==0)
    {
	 count++;
	}
	j++;
   }
   if(count==2)
   {
    sum=sum+i;
   }
    i++;
}
printf("\nsum is %d",sum);
   getch();
}