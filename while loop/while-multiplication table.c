// multiplication table 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,m;
	printf("\n enter a value of n ");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
	m = n*i;
	printf("%d\n",m);
	i++;
    }
    getch();
}