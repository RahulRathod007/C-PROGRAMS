#include<stdio.h>
#include<conio.h>
void main()
{
	int rem=0,no,sum=1;
	printf("enter a value of n "); //123
	scanf("%d",&no);
	while(no>0)                   //123>0
	{
	rem=no%10;                   //123 % 10 = 3
	no=no/10;                    //123 / 10 = 12 
	sum=sum*rem;	             // sum = sum +3
	}
	printf("product is %d",sum);    //1*2*3
	getch();
}