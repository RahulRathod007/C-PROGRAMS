//Write a C program to find cube of any number using function. 
#include<stdio.h>
#include<conio.h>
void main()
{
 void cube(int);
 int no;
 printf("\n enter a number\n");
 scanf("%d",&no);
 cube(no);
}
void cube(int c)
{ 
 int num=c*c*c;
 printf("\n cube is %d",num);
}