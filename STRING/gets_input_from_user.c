// wap to input string from user and printf it using gets function
#include<stdio.h>
#include<conio.h>
void main()
{
 char name[90];
 printf("\n enter a string from keyboard \n");
 gets(name);
 printf("string is : %s",name);
}