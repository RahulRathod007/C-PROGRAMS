// wap to print all odd numbers between 100
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("\n enter a value of n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	//if(i%2!=0)
	if(i%2==1)
	{
	printf("%d\t",i);
	}
	i++;
	}
	getch();
}