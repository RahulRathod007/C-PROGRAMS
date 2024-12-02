//wap to print all even numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("\n enter a value of n :");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	if(i%2==0)
	{
	printf("%d\t",i);
	}
	i++;
	}
	getch();
}