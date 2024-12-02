//wap to input a number and count the digit of number using recursion.
#include<stdio.h>
#include<conio.h>
int count=0;
void main()
{
  void count_digit(int);
  int no;
  printf("\n enter a number \n");
  scanf("%d",&no);
  count_digit(no);
  getch();
}
void count_digit(int x)
{
   if(x!=0)
   {
     x = x /10;
	 count++;
     count_digit(x);
   }
   else
   {
    printf("\n Digit Are %d",count);
   }
}