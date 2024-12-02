#include<stdio.h>
#include<conio.h>
void main()
{
	int rem=0,rev=0,no,temp;
	printf("enter a value of n ");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
	rem=no%10;
	no=no/10;
	rev=rev*10+rem;
	}
	no=temp;
	if(temp==rev)
	{
	printf("palindrome ");
	}
	else 
	{
	printf(" not palindrome");
	}
	getch();
}