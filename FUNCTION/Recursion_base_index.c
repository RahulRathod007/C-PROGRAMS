//wap to input two values base and index and calculate its  power using recurssion 
#include<stdio.h>
#include<conio.h>
int p=1;
void main()
{
 void power(int,int);
 int base,index;
 printf("\n enter a base and index value \n");
 scanf("%d%d",&base,&index);
 power(base,index);
 getch();
}
void power(int base,int index)
{
  if(index!=0)
  {
   p = p * base;
   power(base,--index);
  }
  else
  {
   printf("power is %d",p);
  }
}

