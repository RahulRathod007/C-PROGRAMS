// count no of digit
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,count=0;
	printf("\n enter a value of n ");
	scanf("%d",&n);
    i=1;
	while(n>0)
	{
	n=n/10;
	count++;
    }
    printf("digits are %d",count);
    getch();
}
    
