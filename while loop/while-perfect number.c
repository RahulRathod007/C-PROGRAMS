#include<stdio.h>
#include<conio.h>
void main()
{
 int no,i=1,sum=0;
 printf("\n enter no ");
 scanf("%d",&no);
 while(i<no)
 {
 	if(no%i==0)
 	{
	 sum=sum+i;
	 }
	i++;
}
    if(sum==no)
    {
	printf("\n perfect number %d",no);
	}
	else 
	{
		printf(" %d  is not perfect number ",no);
	}
	getch();
}