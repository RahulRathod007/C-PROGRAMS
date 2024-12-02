// sum of all odd numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,sum=0;
	printf("\n enter a vlaue of ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	if(i%2!=0)
	{
	sum=sum+i;
	printf("%d\t",i);	
	}
	i++;
	}
	printf("\nsum of %d odd numbers is %d",n,sum);
	getch();
}