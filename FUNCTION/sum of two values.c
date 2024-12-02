#include<stdio.h>
#include<conio.h>
void main()
{
 void sum(int,int); //Decalration
 int a,b;
 printf("\n Enter Two Values \n");
 scanf("%d%d",&a,&b);
 sum(a,b); // calling
 getch();
}
void sum(int x,int y)//Defination
{
 printf("\n Sum is %d",x+y);
}