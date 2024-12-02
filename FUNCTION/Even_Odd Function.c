//Write a C program to check whether a number is even or odd using functions. 
#include<stdio.h>
#include<conio.h>
void main()
{
void even_odd(int);
int no;
printf("\n enter a number \n");
scanf("%d",&no);
even_odd(no);
getch();
}
void even_odd(int x)
{
  if(x%2==0)
  {
   printf("\n Even number is %d",x);
  }
  if(x%2==1)
  {
   printf("\n Odd number is %d",x);
  }
}