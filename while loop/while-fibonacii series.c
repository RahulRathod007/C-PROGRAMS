#include<stdio.h>
#include<conio.h>
void main()
{ 
 int limit,fib,f1=0,f2=1,i=1;
 printf("enter a limit");
 scanf("%d",&limit);
 while(i<=limit)
 {
  fib=f1+f2;
  f1=f2;
  f2=fib;
  printf("\t%d",fib);
  i++;
 }
 getch();
}