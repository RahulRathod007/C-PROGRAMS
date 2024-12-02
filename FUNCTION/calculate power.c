//WAP to create function name as power with two parameters int base and index and calculate 
#include<stdio.h>
#include<conio.h>
void main()
{
 void power(int b,int i); // declaration
 int b,i;
 printf("\n Enter a base value \n");
 scanf("%d",&b);
 printf("\n enter a index value \n");
 scanf("%d",&i);
 power(b,i); //calling
 getch();
}
void power(int base,int index)  // defination
{ 
 int p=1,i;
 for(i=1;i<=index;i++)
 {
   p = p * base;
 }
 printf("\npower is %d\n",p);
}