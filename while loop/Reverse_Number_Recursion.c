//wap to input number and print its reverse using recursion.
#include<stdio.h>
#include<conio.h>
void main()
{
 int reverse(int);
 int no;
 printf("\n Enter a number \n");
 scanf("%d",&no);
 int result=reverse(no);
 printf("\n%d",result);
 return 0;
}
int reverse(int x)
{
 	int rem,rev;
 	if(x)
 	{
 		rem = x % 10;
 		rev= rev*10 +rem;
 		reverse(x/10);
 	}
 	else
 	{
 	 return rev;
    }
}