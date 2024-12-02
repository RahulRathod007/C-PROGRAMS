// print reverse no 
#include<stdio.h>
#include<conio.h>
void main()
{
	int no,rem=0,rev;
	printf("\n enter a value of n ");  //123
	scanf("%d",&no);
	while(no>0)    //123>0
	{
       rem=no%10;    //123 % 10 = 3       12%10=2    1 % 10 = 1
	   no=no/10;      // 123 / 10 = 12    12/10= 1   1 / 10 = 0
	   rev=rev*10+rem;      //rev=rev*10+rem = 3 / 32  /321
	}
	printf("reverse is %d",rev);
	getch();
}