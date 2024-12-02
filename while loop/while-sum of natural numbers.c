// sum of natural numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("\n enter a value of n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	sum =sum+i;
	//printf("%d\t",i);
	i++;
	}
	printf("\nsum of %d natural number is :%d",n,sum);
	getch();
}