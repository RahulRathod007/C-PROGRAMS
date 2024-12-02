// factorial number 
#include<stdio.h>
#include<conio.h>
void main()
{ int fact=1,n;
  printf("enter a value of n");
  scanf("%d",&n);
  while(n!=0)
  {
  fact=fact*n;
  n--;
  }
  printf("%d",fact);
  getch();
}
//5 input
//5*1=5
//5*4=20
//20*3=60
//60*2=120
//120*1=120
  
  
