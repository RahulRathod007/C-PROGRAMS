//reverse natural numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("\n enter a value of n :");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
	printf("\n%d",i);
	i--;
	}
	getch();
}