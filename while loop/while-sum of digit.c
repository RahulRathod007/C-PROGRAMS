// sum of digit program
#include<stdio.h>
#include<stdio.h>
void main()
{
	int no,sum=0,rem=0;
	printf("enter value of n ");
	scanf("%d",&no);
	while(no>0) 
	{
	rem=no%10;
	no=no/10;
	sum=rem+sum;
	}
	printf("sum of digit %d",sum);
	getch();
	
}