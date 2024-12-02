//Write a C program to check whether a number is prime of not 
#include<stdio.h>
#include<conio.h>
void main()
{
 void prime(int);
 int no;
 printf("\n Enter a number \n");
 scanf("%d",&no);
 prime(no);
}
void prime(int no)
{
	int i=1,count=0;
	while(no>=i)
	{
	    if(no%i==0)
	    {
		count++;
		}
		i++;
	}
	if(count==2)
	{
	printf("prime");
	}
	else
	{
	printf("Not prime");
	}
}