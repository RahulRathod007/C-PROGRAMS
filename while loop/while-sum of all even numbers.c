// sum of all even numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("\n enter a value of n ");
	scanf("%d",&n);
	i=1;
	while (i<=n)
	{
	if(i%2==0)
	{
	sum = sum+i;
	printf("%d\t",i);
    }
	i++;
    }
	printf("\n sum of even no is :%d",sum);
	getch();
}